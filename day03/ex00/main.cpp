#include <iostream>
#include <string>
#include "FragTrap.hpp"

int main(void){
    FragTrap billy;
    FragTrap john("John");
    billy.takeDamage(50);
    billy.beRepaired(30);
    john.meleeAttack("Billy");
    john.rangedAttack("Billy");
    return (0);
}