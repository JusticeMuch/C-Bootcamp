#include <iostream>
#include <string>

int main(int ac, char **av){
    
    int count = 0;
    int count2;

    if (ac >= 2){
        while (++count < ac){
            count2 = -1;
            while (av[count][++count2]){
                if (av[count][count2] >= 'a' && av[count][count2] <= 'z')
                    av[count][count2] -= 32;
            }
            std::cout << av[count];
        }
        std::cout << std::endl;
    }else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}