#pragma once
#include <gtest/gtest.h>
#include "../../include/NPC.hpp"
#include "../../include/Factory.hpp"

NPCFactory fact;

TEST(NPC, operatorMinus){
    ASSERT_NO_THROW({
        ObserverVec obs;
        NPCptr npc1 = fact.newNPC(Types::Elf, "guy", 0, 0, obs);
        NPCptr npc2 = fact.newNPC(Types::Elf, "guy", 4, 0, obs);
        ASSERT_FLOAT_EQ((*npc1 - *npc2), 4);
    });
}

TEST(NPC, operatorMinusZero){
    ASSERT_NO_THROW({
        ObserverVec obs;
        NPCptr npc1 = fact.newNPC(Types::Elf, "guy", 0, 0, obs);
        NPCptr npc2 = fact.newNPC(Types::Elf, "guy", 0, 0, obs);
        ASSERT_FLOAT_EQ((*npc1 - *npc2), 0);
    });
}

TEST(NPC, operatorMinusDiag){
    ASSERT_NO_THROW({
        ObserverVec obs;
        NPCptr npc1 = fact.newNPC(Types::Elf, "guy", 0, 3, obs);
        NPCptr npc2 = fact.newNPC(Types::Elf, "guy", 4, 0, obs);
        ASSERT_FLOAT_EQ((*npc1 - *npc2), 5);
    });
}

TEST(NPC, elfVSknight){
    ASSERT_NO_THROW({
        ObserverVec obs;
        NPCptr npc1 = fact.newNPC(Types::Elf, "guy", 0, 0, obs);
        NPCptr npc2 = fact.newNPC(Types::Knight, "guy", 0, 0, obs);

        npc1->fight(*npc2, 5, 5);
        npc2->fight(*npc1, 5, 5);

        ASSERT_TRUE(!npc1->getAlive());
        ASSERT_TRUE(!npc2->getAlive());

    });
}

TEST(NPC, elfVSeld){
    ASSERT_NO_THROW({
        ObserverVec obs;
        NPCptr npc1 = fact.newNPC(Types::Elf, "guy", 0, 0, obs);
        NPCptr npc2 = fact.newNPC(Types::Elf, "guy", 0, 0, obs);

        npc1->fight(*npc2, 0, 2);
        npc2->fight(*npc1, 0, 3);

        ASSERT_TRUE(npc1->getAlive());
        ASSERT_TRUE(npc2->getAlive());

    });
}

TEST(NPC, elfVSdruid){
    ASSERT_NO_THROW({
        ObserverVec obs;
        NPCptr npc1 = fact.newNPC(Types::Elf, "guy", 0, 0, obs);
        NPCptr npc2 = fact.newNPC(Types::Druid, "guy", 0, 0, obs);

        npc1->fight(*npc2, 0, 3);
        npc2->fight(*npc1, 3, 0);

        ASSERT_TRUE(npc1->getAlive());
        ASSERT_TRUE(!npc2->getAlive());

    });
}

TEST(NPC, druidVSknight){
    ASSERT_NO_THROW({
        ObserverVec obs;
        NPCptr npc1 = fact.newNPC(Types::Druid, "guy", 0, 0, obs);
        NPCptr npc2 = fact.newNPC(Types::Knight, "guy", 0, 0, obs);

        npc1->fight(*npc2, 0, 2);
        npc2->fight(*npc1, 0, 3);

        ASSERT_TRUE(npc1->getAlive());
        ASSERT_TRUE(npc2->getAlive());

    });
}

TEST(NPC, druidVSdruid){
    ASSERT_NO_THROW({
        ObserverVec obs;
        NPCptr npc1 = fact.newNPC(Types::Druid, "guy", 0, 0, obs);
        NPCptr npc2 = fact.newNPC(Types::Druid, "guy", 0, 0, obs);

        npc1->fight(*npc2, 5, 5);
        npc2->fight(*npc1, 5, 5);

        ASSERT_TRUE(!npc1->getAlive());
        ASSERT_TRUE(!npc2->getAlive());

    });
}