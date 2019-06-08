#ifndef NINJATRAP_H
#define NINJATRAP_H

#include <iostream>
#include <string>
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap
{
private:
    /* data */
public:
    NinjaTrap();
    ~NinjaTrap() ;
    NinjaTrap(const std::string &name);
    NinjaTrap (const NinjaTrap &j);
    NinjaTrap&   operator=(const NinjaTrap &j);
    //void ninjaShoebox(); instructions unclear

};


#endif