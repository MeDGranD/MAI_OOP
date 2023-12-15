#pragma once
#include <gtest/gtest.h>
#include "../../include/Visitor.hpp"
#include "../../include/NPC.hpp"
#include "../../include/Factory.hpp"

NPCFactory fact4;

TEST(Visitor, NPC){
    ASSERT_NO_THROW({
        ObserverVec vec;
        NPCptr npc = fact4.newNPC(Types::Druid, "guy", 0, 0, vec); 
        NPCFightVisitor visitor;
        ASSERT_TRUE((*npc).accept(visitor) == Types::Druid);
    });
}

TEST(Visitor, NPCvector){
    ASSERT_NO_THROW({
        ObserverVec vec;
        NPCptr npc = fact4.newNPC(Types::Druid, "guy", 0, 0, vec); 
        NPCvector vectr;
        for(size_t i = 0; i < 100; ++i) vectr.push_back(npc);
        NPCFightVisitor visitor;
        ASSERT_TRUE(vectr.accept(visitor) == Types::Druid);
    });
}