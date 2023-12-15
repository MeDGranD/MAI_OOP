#include "../include/Scene.hpp"


int main(){
    
    Scene scene;
    
    for(size_t i = 0; i < 30; ++i){
        scene.createNPC((Types)(rand() % 3), "guy", (rand() % 50), (rand() % 50));
    }

    scene.printNPCs();
    scene.startBattle(rand() % 15);
    scene.printNPCs();

    return 0;

}