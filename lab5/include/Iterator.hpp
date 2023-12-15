#pragma once

template<typename T>
class Iterator{
public:

    Iterator() : pointer(nullptr) {}
    Iterator(T* ptr) : pointer(ptr) {}
    Iterator(const Iterator& other) : pointer(other.pointer) {}
    Iterator& operator=(const Iterator&);

    Iterator& operator++();
    Iterator operator++(int);
    Iterator operator+(std::size_t);
    Iterator& operator--();
    Iterator operator--(int);
    Iterator operator-(std::size_t);

    T& operator*();
    T* operator->();

    const T& operator*() const;
    const T* operator->() const;

    bool operator==(const Iterator&) const;
    bool operator!=(const Iterator&) const;
    bool operator>(const Iterator&) const;
    bool operator<(const Iterator&) const;
    bool operator>=(const Iterator&) const;
    bool operator<=(const Iterator&) const;

private:

    T* pointer;

};

template<typename T>
Iterator<T>& Iterator<T>::operator=(const Iterator& other){

    this->pointer = other.pointer;

}

template<typename T>
Iterator<T>& Iterator<T>::operator++(){

    ++(this->pointer);

    return *this;

}

template<typename T>
Iterator<T> Iterator<T>::operator++(int){

    Iterator<T> temp(*this);

    ++(this->pointer);

    return temp;

}

template<typename T>
Iterator<T> Iterator<T>::operator+(std::size_t n){

    Iterator<T> temp(*this);
    temp.pointer += n;

    return temp;

}

template<typename T>
Iterator<T>& Iterator<T>::operator--(){

    --(this->pointer);

    return *this;

}

template<typename T>
Iterator<T> Iterator<T>::operator--(int){

    Iterator<T> temp(*this);

    --(this->pointer);

    return temp;

}

template<typename T>
Iterator<T> Iterator<T>::operator-(std::size_t n){

    Iterator<T> temp(*this);
    temp.pointer -= n;

    return temp;

}

template<typename T>
T& Iterator<T>::operator*(){
    return *(this->pointer);
}

template<typename T>
T* Iterator<T>::operator->(){
    return this->pointer;
}

template<typename T>
const T& Iterator<T>::operator*() const{
    return *(this->pointer);
}

template<typename T>
const T* Iterator<T>::operator->() const{
    return this->pointer;
}

template<typename T>
bool Iterator<T>::operator==(const Iterator<T>& other) const{
    return this->pointer == other.pointer;
}

template<typename T>
bool Iterator<T>::operator!=(const Iterator<T>& other) const{
    return !(*this == other);
}

template<typename T>
bool Iterator<T>::operator<(const Iterator<T>& other) const{

    int temp = this->pointer - other.pointer;

    return temp < 0;

}

template<typename T>
bool Iterator<T>::operator<=(const Iterator<T>& other) const{

    int temp = this->pointer - other.pointer;

    return temp <= 0;

}

template<typename T>
bool Iterator<T>::operator>(const Iterator<T>& other) const{

    int temp = this->pointer - other.pointer;

    return temp > 0;

}

template<typename T>
bool Iterator<T>::operator>=(const Iterator<T>& other) const{

    int temp = this->pointer - other.pointer;

    return temp >= 0;

}