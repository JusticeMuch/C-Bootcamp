#ifndef SERIAL_H
#define SERIAL_H

#include <iostream>
#include <string>

void * serialize( void );
struct Data { std::string s1;int n; std::string s2; };
Data * deserialize( void * raw );
#endif