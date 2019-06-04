#include <iostream>
#include <string>
#include <iomanip>
#include "contracts.class.hpp"

Contracts::Contracts(){};

Contracts::~Contracts(){};

void    Contracts::add(){
    std::cout << "Please enter your first name : ";
    std:: cin >> this->first_name;
    std::cout << "Please enter your last name : ";
    std:: cin >> this->last_name;
    std::cout << "Please enter your nickname : ";
    std:: cin >> this->nickname;
    std::cout << "Please enter your login : ";
    std:: cin >> this->login;
    std::cout << "Please enter your postal address : ";
    std:: cin >> this->postal;
    std::cout << "Please enter your email : ";
    std:: cin >> this->email;
    std::cout << "Please enter your phone number : ";
    std:: cin >> this->phone_number;
    std::cout << "Please enter your birthdate : ";
    std:: cin >> this->birthdate;
    std::cout << "Please enter your favourite meal : ";
    std:: cin >> this->favourite_meal;
    std::cout << "Please enter your underwear colour : ";
    std:: cin >> this->underwear_colour;
    std::cout << "Please enter your darkest_secret : ";
    std:: cin >> this->darkest_secret;
    std::cout << std::endl;
}

void Contracts::search(void){
	std::string first_name = this->first_name;
	std::string last_name = this->last_name;
	std::string nick_name = this->nickname;

	if (first_name.size() > 10)
		first_name.replace(9, first_name.size(), ".");
	if (last_name.size() > 10)
		last_name.replace(9, last_name.size(), ".");
	if (nickname.size() > 10)
		nickname.replace(9, nickname.size(), ".");

	std::cout << std::setw(10) << first_name << "|";
	std::cout << std::setw(10) << last_name << "|";
	std::cout << std::setw(10) << nickname << std::endl;
}