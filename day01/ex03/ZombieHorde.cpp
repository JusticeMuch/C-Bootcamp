#include <iostream>
#include <string>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <random>

ZombieHorde:: ZombieHorde(int n) : _numberOfZombies(n){
    this->_horde = new Zombie[n];
};

ZombieHorde:: ~ZombieHorde(){};

void    ZombieHorde::announce(){
    for (int i = 0; i < this -> _numberOfZombies; i++){
        this->_horde[i].announce();
    }
}