#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
#include <string>

class   FragTrap{
    
    protected :
        int _hp;
        int _m_hp;
        int _ep;
        int _m_ep;
        int _lev;
        int _melee_da;
        int _ranged_da;
        int _armor_dr;
        std::string _name;

    public:
        FragTrap();
        FragTrap(const std::string &name);
        FragTrap (const FragTrap &j);
        FragTrap&   operator=(const FragTrap &j);
        ~FragTrap();
        void    rangedAttack(std::string const & target);
        void    meleeAttack(std::string const & target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    vaulthunter_dot_exe(std::string const & target);//must still do;

};

#endif