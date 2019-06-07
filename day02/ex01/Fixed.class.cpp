#include <iostream>
#include <string>
#include "Fixed.class.hpp"
#include <cmath>
#include <sstream>

const int Fixed::_fract = 8;

Fixed::Fixed() : _num(0){
    
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed (Fixed const &j){
    *this = j;
}

Fixed::Fixed(int const n) : _num(n << _fract){
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const n){
    std::cout << "Float constructor called" << std::endl;
    this->_num = roundf(n * (1 << _fract));
}

Fixed::~Fixed(){
    std::cout << "Default destructor called" << std::endl;
}

Fixed&  Fixed::operator=(Fixed const &j){
    std::cout << "Assignation operator called" << std::endl;
    this->_num = j.getRawBits();
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
        return ((float)(this->_num) / (1 << _fract));
}
        
int     Fixed::toInt( void ) const{
    return ((int)(this->_num >> _fract));
}

std::ostream & operator<<(std::ostream &o, Fixed const &j){
    o << j.toFloat();
    return (o);
}

