#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <string>
#include "Brain.hpp"

class Human {
    private :
        std::string _name;
        Brain *hum;

    public :
        Brain(std::string name);
        ~Brain();
        std::string identify();
};

#endif