#pragma once
#include <gtest/gtest.h>
#include "../../include/Factory.hpp"

NPCFactory fact2;

TEST(Factory, simpleNewNPC){
    ASSERT_NO_THROW({
        ObserverVec vec;
        NPCptr npc = fact2.newNPC(Types::Elf, "guy", 0, 0, vec);
    });
}