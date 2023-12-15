#include "../include/NPC.hpp"

int NPC::count = 0;

float NPC::operator-(const NPC& other) const{
    return sqrt(pow(this->x - other.x, 2) + pow(this->y - other.y, 2));
}

Types NPC::accept(const INPCVisitor& visitor) const{
    return visitor.visit(*this);
}

Types NPCvector::accept(const INPCVisitor& visitor) const{
    return visitor.visit(*this);
}

void NPC::fight(const NPC& other){
    switch(this->type){
        case(Types::Druid):
            if(other.type == Types::Druid ||
               other.type == Types::Elf)
            {
                this->alive = false;
            }
            break;
        case(Types::Elf):
            if(other.type == Types::Knight) this->alive = false;
            break;
        case(Types::Knight):
            if(other.type == Types::Elf) this->alive = false;
            break;
    }

    if(!this->alive) this->notify("[" + std::to_string(this->id) + "]" + this->name + " was killed by "
                                  + other.name + "[" + std::to_string(other.id) + "]");

}

void NPC::notify(const std::string& str) const{
    for(auto obs : observers){
        obs->HandleEvent(str);
    }
}

void NPC::subsribe(const std::shared_ptr<IFightObserver> obs){
    this->observers.push_back(obs);
}