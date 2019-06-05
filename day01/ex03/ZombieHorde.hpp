#ifndef ZOMBIE_EVENT_H
# define ZOMBIE_EVENT_H

#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieHorde{
    private:
        int _numberOfZombies;
        Zombie *_horde;

    public :
        ZombieHorde(int n);
        ~ZombieHorde();
        void    announce();
};

#endif