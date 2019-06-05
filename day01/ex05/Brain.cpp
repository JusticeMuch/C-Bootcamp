#include <iostream>
#include <string>
#include "Brain.hpp"

Brain::Brain(std::string name) : _name(name){
    std::cout << "brain named " << this->_name << "is created "<<std::endl;
}

Brain::~Brain(){}

std::string    Brain::identify(){
    
    std::string test;
    std::cout << this << std::endl;
    return test;
}