#include <iostream>
#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void){
    ScavTrap steve;
    FragTrap john("John");
    steve.challengeNewcomer();
    steve.takeDamage(50);
    steve.beRepaired(30);
    john.meleeAttack("Billy");
    john.rangedAttack("Billy");
    john.vaulthunter_dot_exe("Billy");
    john.vaulthunter_dot_exe("Jack");
    john.vaulthunter_dot_exe("Sam");
    john.vaulthunter_dot_exe("Peter");
    john.vaulthunter_dot_exe("Julia");
    return (0);
}