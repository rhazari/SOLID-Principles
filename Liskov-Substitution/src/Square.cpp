#include "../header/Square.h"
#include <iostream>

Square::Square() {
    std::cout<<"Square constructor\n";
}

Square::~Square() {
    std::cout<<"Square de-structor\n";
}

void Square::setSize(double size){
    size_ = size;
}

double Square::getSize() {
    return size_;
}

double Square::getArea(){
    return size_*size_;
}