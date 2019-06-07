#include <iostream>
#include <string>
#include "FragTrap.hpp"

FragTrap::FragTrap() : _hp(100), _m_hp(100), _ep(100), _m_ep(100), _lev(1), 
                        _name("Billy"), _melee_da(30), _ranged_da(20), _armor_dr(5){};

FragTrap::FragTrap(const std::string &name) : _hp(100), _m_hp(100), _ep(100), _m_ep(100), _lev(1), 
                        _name(name), _melee_da(30), _ranged_da(20), _armor_dr(5){};

FragTrap::~FragTrap(){};

void    FragTrap::rangedAttack(std::string const & target){
    std::cout << this->_name << " attacks " << target << " with ranged attack, inflicting  " <<
                this->_ranged_da << " of damage point!!!" << std::endl;
}

void    FragTrap::meleeAttack(std::string const & target){
    std::cout << this->_name << " attacks " << target << " with melee attack, inflicting  " <<
                this->_melee_da << " of damage point!!!" << std::endl;
}

FragTrap&   FragTrap::operator=(const FragTrap &j){
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

void    FragTrap::takeDamage(unsigned int amount){
    if (this->_hp - amount > 0)
        this->_hp -= amount;
    else
        this->_hp = 0;
    std::cout << this->_name << " takes  " << amount << " points worth of damage reducing his hp  to " <<
                this->_hp<< std::endl;
}

void    FragTrap::beRepaired(unsigned int amount){
    if (this->_hp + amount > 100){
        amount -= 100 - this->_hp;
        this->_hp = 100;
    }else{
        this->_hp += amount;
    }
    if (this->_ep + amount >= 100){
        this->_ep = 100;
    }else{
        this->_ep += amount;
    }
    std::cout << this->_name << " receives  " << amount << " points worth of repair increasing his hp  to " <<
                this->_hp<< std::endl;
}

