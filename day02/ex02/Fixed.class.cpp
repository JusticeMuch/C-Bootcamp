#include <iostream>
#include <string>
#include "Fixed.class.hpp"
#include <cmath>
#include <sstream>

Fixed::Fixed() : _num(0), _fract(0){
}

Fixed::Fixed(int const n) : _num(n), _fract(0){
}

Fixed::Fixed(float const n){
    this->_num = std::roundf(n);
    if (this->_num > n)
    this->_num =  this->_num - 1;
    float dec_f = n - this->_num;
    this->_fract = int(dec_f*100000000);
}

Fixed::~Fixed(){
}

Fixed&  Fixed::operator=(Fixed const &j){
    this->_num = j.getRawBits();
    this->_fract = j._fract;
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
    float temp = this->toFloat();
    ++temp;
    Fixed *res = new Fixed(temp);
    return (*res);
}

Fixed&   Fixed::operator--(){
    float temp = this->toFloat();
    --temp;
    Fixed *res = new Fixed(temp);
    return (*res);
}
Fixed&   Fixed::operator++(int){
    float temp = this->toFloat();
    float result = temp;
    ++temp;
    Fixed *res = new Fixed(result);
    return (*res);
}

Fixed&   Fixed::operator--(int){
    float temp = this->toFloat();
    float result = temp;
    --temp;
    Fixed *res = new Fixed(result);
    return (*res);
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

