#include <iostream>
#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main(void){
    ScavTrap steve;
    NinjaTrap peter("Peter");
    FragTrap john("John");
    steve.challengeNewcomer();
    steve.takeDamage(50);
    steve.beRepaired(30);
    peter.takeDamage(400);
    peter.beRepaired(120);
    john.meleeAttack("Billy");
    john.rangedAttack("Billy");
    peter.rangedAttack("John");
    john.vaulthunter_dot_exe("Billy");
    john.vaulthunter_dot_exe("Jack");
    john.vaulthunter_dot_exe("Sam");
    john.vaulthunter_dot_exe("Peter");
    john.vaulthunter_dot_exe("Julia");
    return (0);
}