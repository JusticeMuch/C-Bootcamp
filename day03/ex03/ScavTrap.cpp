#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() {
    this->_hp = 100;
    this->_m_hp = 100;
    this->_ep = 50;
    this->_m_ep = 50;
    this->_lev = 1;
    this->_melee_da = 20;
    this->_ranged_da = 15;
    this->_armor_dr = 3;
    this->_name = "Steve";
    std::cout << "ScavTrap " << this->_name << " has been created" << std::endl;
};

ScavTrap::ScavTrap(const std::string &name){
    this->_hp = 100;
    this->_m_hp = 100;
    this->_ep = 50;
    this->_m_ep = 50;
    this->_lev = 1;
    this->_melee_da = 20;
    this->_ranged_da = 15;
    this->_armor_dr = 3;
    this->_name = name;
    std::cout << "ScavTrap " << this->_name << " has been created" << std::endl;
};

ScavTrap::ScavTrap (const ScavTrap &j){
    *this = j;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap " << this->_name << " has been destroyed" << std::endl;
};

ScavTrap&   ScavTrap::operator=(const ScavTrap &j){
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

void    ScavTrap::challengeNewcomer(){
    std::string challengers[5] = {"Jason", "KillBill", "Lopez", "Frattter", "Jabu"};
    std::cout << this->_name << " challenges " << challengers[std::rand()%5] <<" to a duel." << std::endl;
    std::srand(2000);
}
