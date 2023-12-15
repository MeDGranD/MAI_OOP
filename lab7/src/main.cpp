#include "../include/Scene.hpp"

std::mutex walkMut;
std::mutex fightMut;
std::mutex consoleLock;

int main(){
    
    Scene scene(50, 50);
    
    for(size_t i = 0; i < 50; ++i){
        scene.createNPC((Types)(rand() % 16), "guy", (rand() % 50), (rand() % 50));
    }

    scene.printNPCs();
    scene.startBattle();
    scene.printNPCs();

    return 0;

}