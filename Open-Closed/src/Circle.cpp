#include "../header/Circle.h"
#include <iostream>

Circle::Circle() {
    std::cout<<"Calling Circle constructor\n";
}

Circle::~Circle() {
    std::cout<<"Calling Circle de-structor\n";
}

void Circle::draw() {
    std::cout<<"Drawing a Circle here\n";
}