#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type){
    std::cout << this->_name << " named zombie created " << std::endl;
}

Zombie::~Zombie(){};

void    Zombie::announce(){
    std::cout << "<" << this->_name << "(" << this->_type << ") >  Braiiiiiiinnnssss..." << std::endl;
}