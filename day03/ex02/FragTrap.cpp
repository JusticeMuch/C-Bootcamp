#include <iostream>
#include <string>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap() {
    this->_hp = 100;
    this->_m_hp = 100;
    this->_ep = 50;
    this->_m_ep = 50;
    this->_lev = 1;
    this->_melee_da = 20;
    this->_ranged_da = 15;
    this->_armor_dr = 3;
    this->_name = "Steve";
    std::cout << "FragTrap " << this->_name << " has been created" << std::endl;
};

FragTrap::FragTrap(const std::string &name){
    this->_hp = 100;
    this->_m_hp = 100;
    this->_ep = 50;
    this->_m_ep = 50;
    this->_lev = 1;
    this->_melee_da = 20;
    this->_ranged_da = 15;
    this->_armor_dr = 3;
    this->_name = name;
    std::cout << "FragTrap " << this->_name << " has been created" << std::endl;
};

FragTrap::FragTrap (const FragTrap &j){
    *this = j;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap " << this->_name << " has been destroyed" << std::endl;
};

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

void    FragTrap::vaulthunter_dot_exe(std::string const & target){
    std::string attacks[5] = {"electrify", "shocker", "bibi", "skraa", "daaa"};
    if (this->_ep >= 25){
        this->_ep -= 25;
        std::cout << target << " is hit with " << attacks[std::rand() % 5] << " and takes 25 damage points" << std::endl;
    }else{
        std::cout << this->_name << " does not have enough energy for this attack" << " " << std::endl;
    }
}
