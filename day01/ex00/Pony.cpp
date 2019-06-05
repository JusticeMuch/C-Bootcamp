#include <iostream>
#include <string>
#include "Pony.hpp"

Pony::Pony(std::string name, int age) : _name(name), _age(age){}; 

Pony:: ~Pony(){
   			std::cout << this->_name << " died" << std::endl;
}	

