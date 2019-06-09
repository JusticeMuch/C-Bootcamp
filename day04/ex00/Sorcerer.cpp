#include <iostream>
#include <string>
#include "Sorcerer.hpp"

Sorceror :: Sorceror(const std::string &name, const std::string title):
                    name(name), title(title){
    std::cout << this->name << ", " << this->title << " , is born !" << std::endl; 
}

Sorceror :: Sorceror(const Sorceror &k){
    *this = k;
}

Sorceror& Sorceror::operator=(Sorceror &j){
    this->name = j.name;
    this->title = j.title;
    return (*this);
}

std::string Sorceror::getTitle(){
    return (this->title);
}

std::string Sorceror::getName(){
    return (this->name);
}

Sorceror:: ~Sorceror(){
    std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same !" << std::endl;
}

std::ostream   &operator<<(std::ostream &j, Sorceror &k){
    std::string out = "I am "+ k.getName() +"," + k.getTitle() +", and I like ponies !"; 
    j << out;
}