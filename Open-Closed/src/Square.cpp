#include "../header/Square.h"
#include <iostream>

Square::Square() {
    std::cout<<"Calling Square constructor\n";
}

Square::~Square() {
    std::cout<<"Calling Square de-structor\n";
}

void Square::draw() {
    std::cout<<"Drawing a Square here\n";
}
