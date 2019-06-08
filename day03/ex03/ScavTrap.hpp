#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    /* data */
public:
    ScavTrap();
    ~ScavTrap() ;
    ScavTrap(const std::string &name);
    void  challengeNewcomer();
    ScavTrap (const ScavTrap &j);
    ScavTrap&   operator=(const ScavTrap &j);

};


#endif