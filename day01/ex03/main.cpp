#include <iostream>
#include <string>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(void){
    ZombieHorde t = ZombieHorde(12);
    t.announce();
    return (0);
}