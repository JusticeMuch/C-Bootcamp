#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class   FragTrap : public ClapTrap{
    
    public:
        FragTrap();
        FragTrap(const std::string &name);
        FragTrap (const FragTrap &j);
        FragTrap&   operator=(const FragTrap &j);
        ~FragTrap();
        void    vaulthunter_dot_exe(std::string const & target);//must still do;

};

#endif