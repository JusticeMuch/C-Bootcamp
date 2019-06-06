#include <iostream>
#include <string>
#include "Fixed.class.hpp"

Fixed::Fixed() : _num(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n) : _num(n){
    std::cout << "Copy constructor called" << std::endl;
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


