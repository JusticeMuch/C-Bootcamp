#ifndef SORCEROR_H
#define SORCEROR_H

#include <iostream>
#include <string>

class   Sorceror{
    private :
        std::string name;
        std::string title;

    public :
        Sorceror(const std::string &name, const std::string title);
        Sorceror(const Sorceror &k);
        Sorceror &operator=(Sorceror &j);
        ~Sorceror();
        std::string getTitle();
        std::string getName();
        
};
std::ostream   &operator<<(std::ostream &j, Sorceror &k);
#endif