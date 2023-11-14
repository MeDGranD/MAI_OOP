#include "../../include/Figures/Rhombus.hpp"

Rhombus::Rhombus(): Quadangle(){}
Rhombus::Rhombus(const Array<point>& arr): Quadangle(arr){ rhombCheck(); }
Rhombus::Rhombus(const std::initializer_list<point>& list): Quadangle(list){ rhombCheck(); }
Rhombus::Rhombus(const Rhombus& rect)  noexcept : Quadangle(rect){}
Rhombus::Rhombus(Rhombus&& temp)  noexcept : Quadangle(temp){}

point Rhombus::center() const{
    point& p1 = this->vertexes[0], p2 = this->vertexes[2];
    return point((p1.x + p2.x) / 2, (p1.y + p2.y) / 2);
}

Rhombus::operator double() const{
    Vector vec1(this->vertexes[0], this->vertexes[2]);
    Vector vec2(this->vertexes[1], this->vertexes[3]);
    return (len(vec1) * len(vec2)) / 2;
}

void Rhombus::rhombCheck() const{
    point& p1 = this->vertexes[0], p2 = this->vertexes[1],
           p3 = this->vertexes[2], p4 = this->vertexes[3];
    Vector vec1(p1, p2), vec2(p2, p3), vec3(p4, p3), vec4(p1, p4);
    if(vec1 == vec3 && vec2 == vec4 && len(vec1) == len(vec2)){
        return;
    }
    else {
        throw std::logic_error("Figure is not rhombus");
    }
}

Rhombus& Rhombus::operator=(const Rhombus& other){
    this->vertexes = other.vertexes;
    return *this;
}

Rhombus& Rhombus::operator=(Rhombus&& temp){
    this->vertexes.resize(0);
    this->vertexes = std::move(temp.vertexes);
    return *this;
}