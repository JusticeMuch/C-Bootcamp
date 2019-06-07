#include <iostream>
#include <string>
#include "Fixed.class.hpp"
#include <cmath>
#include <sstream>

const int Fixed::_fract = 8;

Fixed::Fixed() : _num(0){
}

Fixed::Fixed (Fixed const &j){
    *this = j;
}

Fixed::Fixed(int const n) : _num(n << _fract){
}

Fixed::Fixed(float const n){
    this->_num = roundf(n * (1 << _fract));
}

Fixed::~Fixed(){
}

Fixed&  Fixed::operator=(Fixed const &j){
    this->_num = j.getRawBits();
    return (*this);
}

Fixed&  Fixed::operator+(Fixed const &j){
    Fixed *temp =  new Fixed(this->toFloat() + j.toFloat());
    return (*temp);
}
Fixed&  Fixed::operator-(Fixed const &j){
    Fixed *temp =  new Fixed(this->toFloat() - j.toFloat());
    return (*temp);
}

Fixed&  Fixed::operator*(Fixed const &j){
    Fixed *temp =  new Fixed(this->toFloat() * j.toFloat());
    return (*temp);
}

Fixed&  Fixed::operator/(Fixed const &j){
    Fixed *temp =  new Fixed(this->toFloat() / j.toFloat());
    return (*temp);
} 
Fixed&    Fixed::operator>(Fixed const &j){
    if (this->toFloat() > j.toFloat()){
        return (*this);
    }else{
        Fixed *res = new Fixed();
        *res = j;
        return (*res);
    }
}
Fixed&    Fixed::operator>=(Fixed const &j){
    if (this->toFloat() >= j.toFloat()){
        return (*this);
    }else{
        Fixed *res = new Fixed();
        *res = j;
        return (*res);
    }
}

Fixed&    Fixed::operator<(Fixed const &j){
    if (this->toFloat() < j.toFloat()){
        return (*this);
    }else{
        Fixed *res = new Fixed();
        *res = j;
        return (*res);
    }
}

Fixed&    Fixed::operator<=(Fixed const &j){
    if (this->toFloat() <= j.toFloat()){
        return (*this);
    }else{
        Fixed *res = new Fixed();
        *res = j;
        return (*res);
    }
}

Fixed&    Fixed::operator==(Fixed const &j){
    if (this->toFloat() == j.toFloat()){
        return (*this);
    }else{
        Fixed *res = new Fixed();
        *res = j;
        return (*res);
    }
}

Fixed&    Fixed::operator!=(Fixed const &j){
    if (this->toFloat() != j.toFloat()){
        return (*this);
    }else{
        Fixed *res = new Fixed();
        *res = j;
        return (*res);
    }
}

Fixed&   Fixed::operator++(){
    this->_num++;
    return (*this);
}

Fixed&   Fixed::operator--(){
    this->_num--;
    return (*this);
}
Fixed&   Fixed::operator++(int){
    Fixed *temp = new Fixed(*this);
    operator++();
    return (*temp);
}

Fixed&   Fixed::operator--(int){
    Fixed *temp = new Fixed(*this);
    operator++();
    return (*temp);
}

Fixed&    Fixed::min(Fixed const &j, Fixed const &k){
    Fixed *result = new Fixed();
    if (j.toFloat() < k.toFloat()){
        *result = j;
    }else{
        *result = k;
    }
    return (*result);
}
Fixed&  Fixed::max(Fixed const &j, Fixed const &k){
    Fixed *result = new Fixed();
    if (j.toFloat() > k.toFloat()){
        *result = j;
    }else{
        *result = k;
    }
    return (*result);
}

int     Fixed::getRawBits() const{
    return (this->_num);
}

void    Fixed::setRawBits(int const raw){
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

