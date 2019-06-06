#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <string>

class   Fixed{

    private : 
        int _num;
        static const int _fract;

    public :
        Fixed();
        Fixed(int const n);
        ~Fixed();
        Fixed&  operator=(Fixed const &j);
        int     getRawBits() const;
        void    setRawBits(int const raw);
        

};

#endif