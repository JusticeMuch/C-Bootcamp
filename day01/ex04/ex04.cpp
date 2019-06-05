#include <iostream>
#include <string>

int main(void){
    std::string test = "HI THIS IS BRAIN";
    std::string& test1 = test;
    std::cout << test1 << std::endl;
    return (0);
}