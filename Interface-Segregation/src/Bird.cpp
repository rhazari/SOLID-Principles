#include "../header/Bird.h"
#include <iostream>

Bird::Bird() {
    std::cout<<"Calling the Bird Constructor\n";
}

Bird::~Bird() {
    std::cout<<"Calling the Bird Destructor\n";
}

void Bird::fly() {
    std::cout<<"This Bird can fly\n";
}
