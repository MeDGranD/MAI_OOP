#include "../include/Factory.hpp"

NPCptr NPCFactory::newNPC(Types type, const std::string& name, float x, float y, const ObserverVec& obs) const {

    if((x < 0 || x > 500) || (y < 0 || y > 500)){
        throw std::logic_error("Unexpected coordinates.");
    }

    NPCptr res = std::make_shared<NPC>();
    
    res->setType(type);
    res->setCords(std::pair<float, float>(x, y));
    res->setName(name);
    res->id = NPC::count;
    ++NPC::count;

    for(auto ob : obs){
        res->subsribe(ob);
    }

    return res;

}