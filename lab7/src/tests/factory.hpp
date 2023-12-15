#pragma once
#include <gtest/gtest.h>
#include "../../include/Factory.hpp"

NPCFactory fact2;

TEST(Factory, simpleNewNPC1){
    ASSERT_NO_THROW({
        ObserverVec vec;
        NPCptr npc = fact2.newNPC(Types::Bandit, "guy", 0, 0, vec);
        ASSERT_TRUE(npc->getType() == Types::Bandit);
        ASSERT_TRUE(npc->getWalk() == 10);
        ASSERT_TRUE(npc->getAttack() == 10);
    });
}

TEST(Factory, simpleNewNPC2){
    ASSERT_NO_THROW({
        ObserverVec vec;
        NPCptr npc = fact2.newNPC(Types::Bear, "guy", 0, 0, vec);
        ASSERT_TRUE(npc->getType() == Types::Bear);
        ASSERT_TRUE(npc->getWalk() == 5);
        ASSERT_TRUE(npc->getAttack() == 10);
    });
}

TEST(Factory, simpleNewNPC3){
    ASSERT_NO_THROW({
        ObserverVec vec;
        NPCptr npc = fact2.newNPC(Types::Bull, "guy", 0, 0, vec);
        ASSERT_TRUE(npc->getType() == Types::Bull);
        ASSERT_TRUE(npc->getWalk() == 30);
        ASSERT_TRUE(npc->getAttack() == 10);
    });
    
}

TEST(Factory, simpleNewNPC4){
    ASSERT_NO_THROW({
        ObserverVec vec;
        NPCptr npc = fact2.newNPC(Types::Dragon, "guy", 0, 0, vec);
        ASSERT_TRUE(npc->getType() == Types::Dragon);
        ASSERT_TRUE(npc->getWalk() == 50);
        ASSERT_TRUE(npc->getAttack() == 30);
    });
}

TEST(Factory, simpleNewNPC5){
    ASSERT_NO_THROW({
        ObserverVec vec;
        NPCptr npc = fact2.newNPC(Types::Druid, "guy", 0, 0, vec);
        ASSERT_TRUE(npc->getType() == Types::Druid);
        ASSERT_TRUE(npc->getWalk() == 10);
        ASSERT_TRUE(npc->getAttack() == 10);
    });
}

TEST(Factory, simpleNewNPC6){
    ASSERT_NO_THROW({
        ObserverVec vec;
        NPCptr npc = fact2.newNPC(Types::Elf, "guy", 0, 0, vec);
        ASSERT_TRUE(npc->getType() == Types::Elf);
        ASSERT_TRUE(npc->getWalk() == 10);
        ASSERT_TRUE(npc->getAttack() == 50);
    });
}

TEST(Factory, simpleNewNPC7){
    ASSERT_NO_THROW({
        ObserverVec vec;
        NPCptr npc = fact2.newNPC(Types::Frog, "guy", 0, 0, vec);
        ASSERT_TRUE(npc->getType() == Types::Frog);
        ASSERT_TRUE(npc->getWalk() == 1);
        ASSERT_TRUE(npc->getAttack() == 10);
    });
}

TEST(Factory, simpleNewNPC8){
    ASSERT_NO_THROW({
        ObserverVec vec;
        NPCptr npc = fact2.newNPC(Types::Knight, "guy", 0, 0, vec);
        ASSERT_TRUE(npc->getType() == Types::Knight);
        ASSERT_TRUE(npc->getWalk() == 30);
        ASSERT_TRUE(npc->getAttack() == 10);
    });
}

TEST(Factory, simpleNewNPC9){
    ASSERT_NO_THROW({
        ObserverVec vec;
        NPCptr npc = fact2.newNPC(Types::Orc, "guy", 0, 0, vec);
        ASSERT_TRUE(npc->getType() == Types::Orc);
        ASSERT_TRUE(npc->getWalk() == 20);
        ASSERT_TRUE(npc->getAttack() == 10);
    });
}

TEST(Factory, simpleNewNPC10){
    ASSERT_NO_THROW({
        ObserverVec vec;
        NPCptr npc = fact2.newNPC(Types::Pegas, "guy", 0, 0, vec);
        ASSERT_TRUE(npc->getType() == Types::Pegas);
        ASSERT_TRUE(npc->getWalk() == 30);
        ASSERT_TRUE(npc->getAttack() == 10);
    });
}

TEST(Factory, simpleNewNPC11){
    ASSERT_NO_THROW({
        ObserverVec vec;
        NPCptr npc = fact2.newNPC(Types::Princess, "guy", 0, 0, vec);
        ASSERT_TRUE(npc->getType() == Types::Princess);
        ASSERT_TRUE(npc->getWalk() == 1);
        ASSERT_TRUE(npc->getAttack() == 1);
    });
}


TEST(Factory, simpleNewNPC12){
    ASSERT_NO_THROW({
        ObserverVec vec;
        NPCptr npc = fact2.newNPC(Types::Slaveowner, "guy", 0, 0, vec);
        ASSERT_TRUE(npc->getType() == Types::Slaveowner);
        ASSERT_TRUE(npc->getWalk() == 10);
        ASSERT_TRUE(npc->getAttack() == 10);
    });
}

TEST(Factory, simpleNewNPC13){
    ASSERT_NO_THROW({
        ObserverVec vec;
        NPCptr npc = fact2.newNPC(Types::Squirell, "guy", 0, 0, vec);
        ASSERT_TRUE(npc->getType() == Types::Squirell);
        ASSERT_TRUE(npc->getWalk() == 5);
        ASSERT_TRUE(npc->getAttack() == 5);
    });
}

TEST(Factory, simpleNewNPC14){
    ASSERT_NO_THROW({
        ObserverVec vec;
        NPCptr npc = fact2.newNPC(Types::Vihuhol, "guy", 0, 0, vec);
        ASSERT_TRUE(npc->getType() == Types::Vihuhol);
        ASSERT_TRUE(npc->getWalk() == 5);
        ASSERT_TRUE(npc->getAttack() == 20);
    });
}


TEST(Factory, simpleNewNPC15){
    ASSERT_NO_THROW({
        ObserverVec vec;
        NPCptr npc = fact2.newNPC(Types::Vip, "guy", 0, 0, vec);
        ASSERT_TRUE(npc->getType() == Types::Vip);
        ASSERT_TRUE(npc->getWalk() == 50);
        ASSERT_TRUE(npc->getAttack() == 10);
    });
}

TEST(Factory, simpleNewNPC16){
    ASSERT_NO_THROW({
        ObserverVec vec;
        NPCptr npc = fact2.newNPC(Types::Wolfman, "guy", 0, 0, vec);
        ASSERT_TRUE(npc->getType() == Types::Wolfman);
        ASSERT_TRUE(npc->getWalk() == 40);
        ASSERT_TRUE(npc->getAttack() == 5);
    });
}