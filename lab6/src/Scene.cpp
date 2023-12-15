#include "../include/Scene.hpp"

Scene::Scene(){
    std::shared_ptr<FileFightObserver> fileObs = std::make_shared<FileFightObserver>();
    std::shared_ptr<ConsoleFightObserver> consObs = std::make_shared<ConsoleFightObserver>();

    this->observers.push_back(fileObs);
    this->observers.push_back(consObs);
}

Scene::Scene(const ObserverVec& obs){
    for(auto ob : obs){
        this->observers.push_back(ob);
    }
}

void Scene::startBattle(float distance){

    this->NPCs.Fightdistance = distance;

    NPCFightVisitor fight;
    this->NPCs.accept(fight);

}

void Scene::save(const std::string& filename){

    std::ofstream file;
    file.open(filename);

    for(auto npc : this->NPCs){
        file << (int)npc->getType() << ' ' << npc->getId() << ' ' << npc->getName() << ' '
             << npc->getCords().first << ' ' << npc->getCords().second << ' ' << npc->getAlive() << std::endl;
    }

    file.close();

}

void Scene::load(const std::string& filename){

    std::fstream file;
    file.open(filename);

    int max = 0;
    int type;
    while(file >> type){

        int id;
        std::string name;
        float x,y;
        bool alive;

        file >> id >> name >> x >> y >> alive;
        max = max < id ? id : max;

        this->createNPC((Types)type, name, x, y);

        this->NPCs.back()->alive = alive;
        this->NPCs.back()->id = id;

    }

    NPC::count = max;

}

void Scene::printNPCs() const{
    
    for(auto npc : this->NPCs){
        std::cout << '[' << npc->getId() << "]: " << npc->getName() << ", " << (int)npc->getType() << ". Coordinates: "
                  << npc->getCords().first << ' ' << npc->getCords().second << ".\tStatus: " << npc->getAlive() << std::endl;
    }

}

void Scene::createNPC(Types type, const std::string& name, float x, float y){
    this->NPCs.push_back(this->Factory.newNPC(type, name, x, y, this->observers));
}
