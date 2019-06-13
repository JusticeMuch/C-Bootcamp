#include <iostream>
#include <string>
#include "serial.hpp"

void * serialize( void ){
    
    char *j = new char[20];
    char alphanum[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    for (int i = 0; i < 8 ; i++)
		j[i] = alphanum[rand() % (sizeof(alphanum) - 1)];

	*(reinterpret_cast<int *>(&j[8])) = rand();

	for (int i = 12; i < 20; ++i)
		j[i] = alphanum[rand() % (sizeof(alphanum) - 1)];

return (reinterpret_cast<void *>(j));
}

Data * deserialize( void * raw ){

    Data				*val = new Data();

	val->s1.assign(reinterpret_cast<char *>(raw), 8);
	val->n = *reinterpret_cast<int *>(&reinterpret_cast<char *>(raw)[8]);
	val->s2.assign(&reinterpret_cast<char *>(raw)[12], 8);
	return (val);
}
