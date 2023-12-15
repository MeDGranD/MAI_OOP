#include "../include/Visitor.hpp"

Types NPCFightVisitor::visit(const NPC& npc) const{
    return npc.getType();
}

Types NPCFightVisitor::visit(const NPCvector& vec) const{
    for(auto npc1 : vec){
    
        if(!npc1->getAlive()) continue;

        for(auto npc2 : vec){
            
            if(!npc2->getAlive()) continue;

            if((npc1 != npc2) && (*npc1 - *npc2 <= vec.Fightdistance)){
                npc1->fight(*npc2);
                npc2->fight(*npc1);
            }
            if(!npc1->getAlive()) break;
        }
    }

    return Types::Druid;
}