#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <string>

class   Fixed{

    private : 
        int _num;
        int _fract;

    public :
        Fixed();
        Fixed(int const n);
        Fixed(float const n);
        ~Fixed();
        Fixed&  operator=(Fixed const &j);
        int     getRawBits() const;
        void    setRawBits(int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;
    
};

std::ostream & operator<<(std::ostream &o, Fixed const &j);

#endif