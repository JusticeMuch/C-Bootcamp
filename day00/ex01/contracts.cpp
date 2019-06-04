#include <iostream>
#include <string>
#include <iomanip>
#include "contracts.class.hpp"

int    main(void){
    Contracts contr[8];
    std::string inp;
    int index = 0;
    while (1){
        std::cin >> inp;
        if (inp == "") return (-1);
        if ((inp == "add" || inp == "ADD") && index < 8){
            contr[index].add();
            index++;
        }else if (inp == "add" || inp == "ADD"){
            std::cout << "The maximunm amount of contracts has been reached" << std::endl;
        }else if ((inp == "search" || inp == "SEARCH") && index >= 4){
            for (int i = 0; i < 4;i++)
                contr[i].search();
        }else if (inp == "search" || inp == "SEARCH"){
            std::cout << "There are to few contracts to view" << std::endl;
        }else if (inp == "exit" || inp == "EXIT"){
            return (0);
        }
    }
}