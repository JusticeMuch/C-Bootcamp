
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include "serial.hpp"

int			main(void)
{
	srand(time(NULL));
	void		*buff = serialize();
	Data		*data = deserialize(buff);
	std::cout	<< data->s1 << " "<< data->n << " " << data->s2 << std::endl;
	return (0);
}