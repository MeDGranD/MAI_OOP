#pragma once
#include "../../include/Observer.hpp"
#include "../../include/Factory.hpp"
#include "../../include/NPC.hpp"
#include <gtest/gtest.h>

NPCFactory fact3;

TEST(Observer, stringHandle){
    ASSERT_NO_THROW({
        std::shared_ptr<FileFightObserver> fobs = std::make_shared<FileFightObserver>();
        std::shared_ptr<ConsoleFightObserver> cobs = std::make_shared<ConsoleFightObserver>();
        ObserverVec vec; vec.push_back(fobs); vec.push_back(cobs);

        NPCptr npc1 = fact3.newNPC(Types::Druid, "guy1", 0, 0, vec);
        NPCptr npc2 = fact3.newNPC(Types::Druid, "guy2", 0, 0, vec);

        npc1->fight(*npc2);
        npc2->fight(*npc1);

    });
}
