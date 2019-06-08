#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>
class   ClapTrap{
    
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
        ClapTrap();
        ClapTrap(const std::string &name);
        ClapTrap (const ClapTrap &j);
        ClapTrap&   operator=(const ClapTrap &j);
        ~ClapTrap();
        void    rangedAttack(std::string const & target);
        void    meleeAttack(std::string const & target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

};


#endif