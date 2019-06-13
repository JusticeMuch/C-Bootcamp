#include <iostream>
#include <iomanip>
#include <string>
#include <exception>

int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);

	std::cout << "char: ";
	try {
		char c = static_cast<char>(std::atoi(av[1]));
		if (isprint(c))
			std::cout << '\'' << c << '\'';
		else
			std::cout << "Non displayable";
	}
	catch (std::exception const & e) {
		std::cout << "impossible";
	}
	std::cout << std::endl;

	std::cout << "int: ";
	try {
		std::cout << static_cast<int>(std::atoi(av[1]));
	}
	catch (std::exception const & e) {
		std::cout << "impossible";
	}
	std::cout << std::endl;

	std::cout << std::fixed;
	std::cout.precision(1);

	std::cout << "float: ";
	try {
		std::cout << static_cast<float>(std::stof(av[1])) << 'f';
	}
	catch (std::exception const & e) {
		std::cout << "impossible";
	}
	std::cout << std::endl;

	std::cout << "double: ";
	try {
		std::cout << static_cast<double>(std::stod(av[1]));
	}
	catch (std::exception const & e) {
		std::cout << "impossible";
	}
	std::cout << std::endl;
    return (0);
}