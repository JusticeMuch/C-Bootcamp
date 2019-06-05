#include <iostream>
#include <string>
#include "Brain.hpp"
#include "Human.hpp"

Human::Human(std::string name) : _name(name){
    this->hum = new Brain(name);
    std::cout << "Human named " << this->_name << "is created "<<std::endl;
}

Human::~Human(){
    delete(this->hum);
}

std::string    Brain::identify(){``
    std::string test;
    std::cout << this << std::endl;
    return test;
}