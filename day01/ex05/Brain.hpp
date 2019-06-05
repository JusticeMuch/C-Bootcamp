#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include <string>

class Brain {
    private :
        std::string _name;
    
    public :
        Brain(std::string name);
        ~Brain();
        std::string identify();
};

#endif