#ifndef CONTRACTS_H
#define CONTRACTS_H

#include <iostream>
#include <string>

class Contracts {

    public :
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string login;
        std::string postal;
        std::string email;
        std::string phone_number;
        std::string birthdate;
        std::string favourite_meal;
        std::string underwear_colour;
        std::string darkest_secret;
        Contracts();
        ~Contracts();
        void add();
        void search();
};

#endif