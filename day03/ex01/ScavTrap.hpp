#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>
#include <string>
#include "FragTrap.hpp"

class ScavTrap : public FragTrap
{
private:
    /* data */
public:
    ScavTrap();
    ~ScavTrap() ;
    ScavTrap(const std::string &name);
    void  challengeNewcomer();
    ScavTrap (const ScavTrap &j);
    ScavTrap&   operator=(const FragTrap &j);

};


#endif