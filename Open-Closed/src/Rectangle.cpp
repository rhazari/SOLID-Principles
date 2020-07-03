#include "../header/Rectangle.h"
#include <iostream>

Rectangle::Rectangle() {
    std::cout<<"Calling Rectangle constructor\n";
}

Rectangle::~Rectangle() {
    std::cout<<"Calling Rectangle de-structor\n";
}

void Rectangle::draw() {
    std::cout<<"Drawing a Rectangle here\n";
}