#pragma once
#include <string>
#include <cmath>
#include <vector>
#include <memory>
#include "Visitor.hpp"
#include "Observer.hpp"

enum class Types{
    Elf,
    Druid,
    Knight
};

using ObserverVec = std::vector<std::shared_ptr<IFightObserver>>;

class INPCVisitor;

class NPC: public std::enable_shared_from_this<NPC>{
friend class NPCFactory;
friend class Scene;
public:

    NPC(){}
    ~NPC() = default;
    
    float operator-(const NPC&) const;
    Types accept(const INPCVisitor&) const;
    void fight(const NPC&);
    void subsribe(const std::shared_ptr<IFightObserver>);
    void notify(const std::string&) const;

    Types getType() const { return this->type; }
    int getId() const { return this->id; }
    std::string getName() const { return this->name; }
    std::pair<float, float> getCords() const { return std::pair<float, float>(this->x, this->y); }
    bool getAlive() const { return this->alive; }

    void setType(Types type) { this->type = type; }
    void setName(const std::string& name) { this->name = name; }
    void setCords(const std::pair<float, float>& cords) { this->x = cords.first; this->y = cords.second; }
    void kill() { this->alive = false; }

private:

    Types type;
    int id;
    static int count;
    std::string name;
    float x, y;
    bool alive = true;
    ObserverVec observers;

};

using NPCptr = std::shared_ptr<NPC>;

class NPCvector: public std::vector<NPCptr>{
public:

    Types accept(const INPCVisitor&) const;
    float Fightdistance;

};