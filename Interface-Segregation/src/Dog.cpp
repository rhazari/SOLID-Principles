#include "../header/Dog.h"
#include <iostream>

Dog::Dog() {
    std::cout<<"Calling the Dog Constructor\n";
}

Dog::~Dog() {
    std::cout<<"Calling the Dog Destructor\n";
}

void Dog::bark() {
    std::cout<<"This Dog can bark\n";
}