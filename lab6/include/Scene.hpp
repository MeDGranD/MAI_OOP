#pragma once
#include "NPC.hpp"
#include "Visitor.hpp"
#include "Observer.hpp"
#include "Factory.hpp"
#include <vector>
#include <memory>
#include <fstream>
#include <iostream>

class Scene{
public:
    Scene();
    Scene(const ObserverVec&);
    ~Scene() = default;

    void createNPC(Types = Types::Druid, const std::string&  = "Guy", float = 0, float = 0);
    void startBattle(float);
    void save(const std::string&);
    void load(const std::string&);
    void printNPCs() const;

private:
    ObserverVec observers;
    NPCFactory Factory;
    NPCvector NPCs;
};