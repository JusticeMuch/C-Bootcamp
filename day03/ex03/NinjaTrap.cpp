#include <iostream>
#include <string>
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

NinjaTrap::NinjaTrap() {
    this->_hp = 60;
    this->_m_hp = 60;
    this->_ep = 120;
    this->_m_ep = 120;
    this->_lev = 1;
    this->_melee_da = 60;
    this->_ranged_da = 5;
    this->_armor_dr = 0;
    this->_name = "Ninja Steve";
    std::cout << "NinjaTrap " << this->_name << " has been created" << std::endl;
};

NinjaTrap::NinjaTrap(const std::string &name){
    this->_hp = 60;
    this->_m_hp = 60;
    this->_ep = 120;
    this->_m_ep = 120;
    this->_lev = 1;
    this->_melee_da = 60;
    this->_ranged_da = 5;
    this->_armor_dr = 0;
    this->_name = name;
    std::cout << "NinjaTrap " << this->_name << " has been created" << std::endl;
};

NinjaTrap::NinjaTrap (const NinjaTrap &j){
    *this = j;
}

NinjaTrap::~NinjaTrap(){
    std::cout << "NinjaTrap " << this->_name << " has been destroyed" << std::endl;
};

NinjaTrap&   NinjaTrap::operator=(const NinjaTrap &j){
    this->_hp = j._hp;
    this->_m_hp = j._m_hp;
    this->_ep = j._ep;
    this->_m_ep = j._m_ep;
    this->_lev = j._lev;
    this->_melee_da = j._melee_da;
    this->_ranged_da = j._ranged_da;
    this->_armor_dr = j._armor_dr;
    this->_name = j._name;
    return (*this);
}
