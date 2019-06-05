#include <iostream>
#include <string>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void){
    ZombieEvent d = ZombieEvent();
    Zombie *jack = d.newZombie("jack", "hacker");
    Zombie *jumper = d.randomChump("jumper");
    delete(jack);
    delete(jumper);
    return (0);
}