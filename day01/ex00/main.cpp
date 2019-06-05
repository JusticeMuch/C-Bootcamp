#include <iostream>
#include <string>
#include "Pony.hpp"

Pony    *ponyOnTheHeap(std::string name, int age){
    Pony *temp = new Pony(name, age);
    std::cout << name << " was created on the heap" << std::endl;
    return temp;
}

Pony ponyOnTheStack(std::string name, int age){
    std::cout << name << " was created on the stack" << std::endl;
    return Pony(name, age);
}

int     main(void){
    Pony *heapPony = ponyOnTheHeap("ted", 45);
    Pony stackPony = ponyOnTheStack("jolene", 85);
    delete(heapPony);
    return (0);
}