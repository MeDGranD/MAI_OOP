#include "../include/Factory.hpp"

NPCptr NPCFactory::newNPC(Types type, const std::string& name, int x, int y, const ObserverVec& obs) const {

    NPCptr res = std::make_shared<NPC>();
    
    res->setType(type);
    res->setCords(std::pair<int, int>(x, y));
    res->setName(name);
    res->id = NPC::count;
    ++NPC::count;

    for(auto ob : obs){
        res->subsribe(ob);
    }

    switch(type){
        case(Types::Bandit):
            res->attackDistance = 10;
            res->walkDistance = 10;
            break;
        case(Types::Bear):
            res->attackDistance = 10;
            res->walkDistance = 5;
            break;
        case(Types::Bull):
            res->attackDistance = 10;
            res->walkDistance = 30;
            break;
        case(Types::Dragon):
            res->attackDistance = 30;
            res->walkDistance = 50;
            break;
        case(Types::Druid):
            res->attackDistance = 10;
            res->walkDistance = 10;
            break;
        case(Types::Elf):
            res->attackDistance = 50;
            res->walkDistance = 10;
            break;
        case(Types::Frog):
            res->attackDistance = 10;
            res->walkDistance = 1;
            break;
        case(Types::Knight):
            res->attackDistance = 10;
            res->walkDistance = 30;
            break;
        case(Types::Orc):
            res->attackDistance = 10;
            res->walkDistance = 20;
            break;
        case(Types::Pegas):
            res->attackDistance = 10;
            res->walkDistance = 30;
            break;
        case(Types::Princess):
            res->attackDistance = 1;
            res->walkDistance = 1;
            break;
        case(Types::Slaveowner):
            res->attackDistance = 10;
            res->walkDistance = 10;
            break;
        case(Types::Squirell):
            res->attackDistance = 5;
            res->walkDistance = 5;
            break;
        case(Types::Vihuhol):
            res->attackDistance = 20;
            res->walkDistance = 5;
            break;
        case(Types::Vip):
            res->attackDistance = 10;
            res->walkDistance = 50;
            break;
        case(Types::Wolfman):
            res->attackDistance = 5;
            res->walkDistance = 40;
            break;
    }

    return res;

}