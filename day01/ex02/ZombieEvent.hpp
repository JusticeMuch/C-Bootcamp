#ifndef ZOMBIE_EVENT_H
# define ZOMBIE_EVENT_H

#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieEvent{
    public :
        ZombieEvent();
        ~ZombieEvent();
        Zombie* newZombie(std::string name, std::string type);
        Zombie* randomChump(std::string type);
};

#endif