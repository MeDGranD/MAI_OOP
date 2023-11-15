#pragma once
#include "Quadangle.hpp"

template<typename T>
class Rhombus final: virtual public Quadangle<T>{
using dpoint = point<T>;
public:

    Rhombus();
    Rhombus(const Array<dpoint>&);
    Rhombus(const std::initializer_list<dpoint>&);

    Rhombus(const Rhombus<T>&) noexcept;
    Rhombus(Rhombus<T>&&) noexcept;

    Rhombus<T>& operator=(const Rhombus<T>&);
    Rhombus<T>& operator=(Rhombus<T>&&);

    dpoint center() const override;
    operator double() const override;

protected:
    void rhombCheck() const;
};

template<typename T>
Rhombus<T>::Rhombus(): Quadangle<T>(){}
template<typename T>
Rhombus<T>::Rhombus(const Array<point<T>>& arr): Quadangle<T>(arr){ rhombCheck(); }
template<typename T>
Rhombus<T>::Rhombus(const std::initializer_list<point<T>>& list): Quadangle<T>(list){ rhombCheck(); }
template<typename T>
Rhombus<T>::Rhombus(const Rhombus<T>& rect)  noexcept : Quadangle<T>(rect){}
template<typename T>
Rhombus<T>::Rhombus(Rhombus<T>&& temp)  noexcept : Quadangle<T>(temp){}

template<typename T>
point<T> Rhombus<T>::center() const{
    point<T>& p1 = this->vertexes[0], p2 = this->vertexes[2];
    return point<T>((p1.x + p2.x) / 2, (p1.y + p2.y) / 2);
}

template<typename T>
Rhombus<T>::operator double() const{
    Vector vec1(this->vertexes[0], this->vertexes[2]);
    Vector vec2(this->vertexes[1], this->vertexes[3]);
    return (len(vec1) * len(vec2)) / 2;
}

template<typename T>
void Rhombus<T>::rhombCheck() const{
    point<T>& p1 = this->vertexes[0], p2 = this->vertexes[1],
           p3 = this->vertexes[2], p4 = this->vertexes[3];
    Vector vec1(p1, p2), vec2(p2, p3), vec3(p4, p3), vec4(p1, p4);
    if(vec1 == vec3 && vec2 == vec4 && len(vec1) == len(vec2)){
        return;
    }
    else {
        throw std::logic_error("Figure is not rhombus");
    }
}

template<typename T>
Rhombus<T>& Rhombus<T>::operator=(const Rhombus<T>& other){
    this->vertexes = other.vertexes;
    return *this;
}

template<typename T>
Rhombus<T>& Rhombus<T>::operator=(Rhombus<T>&& temp){
    this->vertexes.resize(0);
    this->vertexes = std::move(temp.vertexes);
    return *this;
}