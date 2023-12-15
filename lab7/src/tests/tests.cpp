#include "factory.hpp"
#include "npc.hpp"
#include "observer.hpp"
#include "visitor.hpp"
#include <mutex>

std::mutex walkMut;
std::mutex fightMut;
std::mutex consoleLock;

int main(){
    ::testing::InitGoogleTest();

    return RUN_ALL_TESTS();
}