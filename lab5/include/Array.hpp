#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <memory>
#include "Allocator.hpp"
#include "Iterator.hpp"

template<typename T, typename Allocator = Allocator<T>>
class Array{
public:

    Array();
    Array(const size_t, const T& = T());
    Array(const std::initializer_list<T>&);
    Array(const Array<T>&) noexcept;
    Array(Array<T>&&) noexcept;
    Array<T>& operator=(const Array<T>&);
    Array<T>& operator=(Array<T>&&);

    void push_back(const T&) noexcept;
    void pop_back() noexcept;

    size_t size() const noexcept;
    size_t capacity() const noexcept;

    T& operator[](const size_t) const noexcept;
    T& at(const size_t) const noexcept;
    T& back();
    const T& cback() const;

    Iterator<T> begin();
    Iterator<T> end();
    const Iterator<T> cbegin() const;
    const Iterator<T> cend() const;

    bool operator==(const Array<T>&);

    void del(size_t);

    void resize(const size_t, const T& = T());
    void reserve(const size_t);

    virtual ~Array();
protected:
    T* arr;
    size_t sz;
    size_t cap;
    Allocator alloc;
};

template<typename T, typename Allocator>
void Array<T, Allocator>::del(size_t index){
    if(index > this->sz || index < 0){
        throw std::logic_error("Out of array borders error");
    }
    this->arr[index].~T();
    for(size_t currentElem = index + 1; currentElem < this->sz; ++currentElem){
        this->arr[currentElem - 1] = std::move(this->arr[currentElem]);
    }
    --this->sz;
}

template<typename T, typename Allocator>
Array<T, Allocator>::Array(): cap(1), sz(0){
    this->arr = alloc.allocate(1);
}

template<typename T, typename Allocator>
Array<T, Allocator>::Array(const size_t _size, const T& _data): Array(){
    this->resize(_size, _data);
}

template<typename T, typename Allocator>
Array<T, Allocator>::Array(const std::initializer_list<T>& _list): cap(_list.size()), sz(_list.size()){
    
    T* tempArray = alloc.allocate(_list.size());

    try{
        std::uninitialized_copy(_list.begin(), _list.end(), tempArray);
    }
    catch(...){
        alloc.destroy(tempArray);
        throw;
    }

    this->arr = tempArray;

}

template<typename T, typename Allocator>
Array<T, Allocator>::Array(const Array<T>& _other) noexcept : Array() {
    this->resize(_other.capacity());
    this->sz = _other.size();
    for(size_t index = 0; index < this->sz; ++index){
        new(this->arr + index) T(_other[index]);
    }
}

template<typename T, typename Allocator>
Array<T, Allocator>::Array(Array<T>&& temp) noexcept : cap(temp.capacity()), sz(temp.size()) {
    this->arr = temp.arr;
    temp.arr = nullptr;
}

template<typename T, typename Allocator>
Array<T>& Array<T, Allocator>::operator=(const Array<T>& other){

    for(size_t index = 0; index < this->sz; ++index){
        this->arr[index].~T();
    }

    alloc.destroy(this->arr);
    this->arr = alloc.allocate(other.size());
    this->cap = other.capacity();
    this->sz = 0;
    for(size_t index = 0; index < other.size(); ++index){
        this->push_back(other[index]);
    }

    return *this;
}

template<typename T, typename Allocator>
Array<T>& Array<T, Allocator>::operator=(Array<T>&& temp){
    for(size_t index = 0; index < this->sz; ++index){
        this->arr[index].~T();
    }

    alloc.destroy(this->arr);
    this->arr = temp.arr;
    temp.arr = nullptr;
    this->cap = temp.capacity();
    this->sz = temp.size();

    return *this;
}

template<typename T, typename Allocator>
void Array<T, Allocator>::push_back(const T& _data) noexcept{
    this->resize(this->sz + 1, _data);
}

template<typename T, typename Allocator>
void Array<T, Allocator>::pop_back() noexcept{
    if(this->sz == 0){
        return;
    }
    this->resize(this->sz - 1);
}

template<typename T, typename Allocator>
T& Array<T, Allocator>::operator[](const size_t index) const noexcept{
    return this->arr[index];
}

template<typename T, typename Allocator>
T& Array<T, Allocator>::at(const size_t index) const noexcept{
    if(index < 0 || index >= this->sz){
        throw std::logic_error("Array border error");
    }
    return this->arr[index];
}

template<typename T, typename Allocator>
T& Array<T, Allocator>::back(){
    if(this->sz <= 0){
        throw std::logic_error("Cannot back zero or negative sized array");
    }
    return this->arr[this->sz - 1];
}

template<typename T, typename Allocator>
const T& Array<T, Allocator>::cback() const{
    if(this->sz <= 0){
        throw std::logic_error("Cannot back zero or negative sized array");
    }
    return this->arr[this->sz - 1];
}

template<typename T, typename Allocator>
bool Array<T, Allocator>::operator==(const Array<T>& other){
    if(other.size() != this->size()){
        return false;
    }
    for(size_t index = 0; index < this->sz; ++index){
        if(this->arr[index] != other[index]){
            return false;
        }
    }
    return true;
}

template<typename T, typename Allocator>
void Array<T, Allocator>::resize(const size_t _newSize, const T& _data){
    if(_newSize < 0){
        throw std::logic_error("Cannot make negative sized array");
    }

    if(_newSize > this->cap){
        size_t newCap = _newSize > this->cap * 2 ? _newSize : this->cap * 2;
        this->reserve(newCap);
    }

    if(_newSize < this->sz){
        for(size_t index = _newSize; index < this->sz; ++index){
            this->arr[index].~T();
        }
    }
    else if(_newSize > this->sz){
        for(size_t index = this->sz; index < _newSize; ++index){
            new(this->arr + index) T(_data);
        }
    }
    this->sz = _newSize;
}

template<typename T, typename Allocator>
void Array<T, Allocator>::reserve(size_t _newCap){
    T* tempArray = alloc.allocate(_newCap);

    try{
        if(_newCap > this->cap){
            std::uninitialized_copy(this->arr, this->arr + this->cap, tempArray);
        }
        else{
            std::uninitialized_copy(this->arr, this->arr + _newCap, tempArray);
        }
    }
    catch(...){
        alloc.destroy(this->arr);
        throw;
    }

    for(size_t index = 0; index < this->sz; ++index){
        this->arr[index].~T();
    }

    alloc.destroy(this->arr);
    this->arr = tempArray;
    this->cap = _newCap;

}

template<typename T, typename Allocator>
size_t Array<T, Allocator>::size() const noexcept{
    return this->sz;
}

template<typename T, typename Allocator>
size_t Array<T, Allocator>::capacity() const noexcept{
    return this->cap;
}

template<typename T, typename Allocator>
Array<T, Allocator>::~Array(){
    for(size_t index = 0; index < this->sz; ++index){
        this->arr[index].~T();
    }
    alloc.destroy(this->arr);
}

template<typename T, typename Allocator>
Iterator<T> Array<T, Allocator>::begin(){

    return Iterator<T>(&this->arr[0]);

}

template<typename T, typename Allocator>
const Iterator<T> Array<T, Allocator>::cbegin() const{

    const Iterator<T> temp(const_cast<int*>(&(this->arr[0])));

    return temp;

}

template<typename T, typename Allocator>
Iterator<T> Array<T, Allocator>::end(){

    return Iterator<T>(&this->back());

}

template<typename T, typename Allocator>
const Iterator<T> Array<T, Allocator>::cend() const{

    const Iterator<T> temp(const_cast<int*>(&(this->cback())));

    return temp;

}

#endif