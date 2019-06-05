#include <iostream>
#include <string>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <random>

Zombie*     ZombieEvent::newZombie(std::string name, std::string type){
    Zombie *temp = new Zombie(name, type);
    return temp;
}

Zombie*     ZombieEvent::randomChump(std::string type){
    std::string names[5] = {"justin", "julius", "valerie", "cassie", "janice"};
    std::string name = names[std::rand() % (4 - 0 + 1)];
    Zombie *temp = new Zombie(name, type);
    return temp;
}

ZombieEvent:: ZombieEvent(){};

ZombieEvent:: ~ZombieEvent(){};