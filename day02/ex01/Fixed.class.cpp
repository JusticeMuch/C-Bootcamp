#include <iostream>
#include <string>
#include "Fixed.class.hpp"
#include <cmath>
#include <sstream>

Fixed::Fixed() : _num(0), _fract(0){
    
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n) : _num(n), _fract(0){
    std::cout << "Int constructor called" << std::endl;;
}

Fixed::Fixed(float const n){
    this->_num = std::roundf(n);
    if (this->_num > n)
    this->_num =  this->_num - 1;
    float dec_f = n - this->_num;
    this->_fract = int(dec_f*100000000);
}

Fixed::~Fixed(){
    std::cout << "Default destructor called" << std::endl;
}

Fixed&  Fixed::operator=(Fixed const &j){
    std::cout << "Assignation operator called" << std::endl;
    this->_num = j.getRawBits();
    this->_fract = j._fract;
    return (*this);
}

int     Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_num);
}

void    Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    this->_num = raw;
}

float   Fixed::toFloat( void ) const{
    std::string out_string;
    std::stringstream ss;
    ss << this->_fract;
    out_string = ss.str();
    std::string deci = "0." + out_string;
    float dec = float(this->_fract);
    return (float(this->_num) + (dec/100000000));
}
        
int     Fixed::toInt( void ) const{
    return (this->_num);
}

