#include "../header/Rectangle.h"
#include <iostream>

Rectangle::Rectangle() {
    std::cout<<"Rectangle constructor\n";
}

Rectangle::~Rectangle() {
    std::cout<<"Rectangle de-structor\n";
}

void Rectangle::setWidth(double width){
    width_ = width;
}

double Rectangle::getWidth() {
    return width_;
}

void Rectangle::setHeight(double height){
    height_ = height;
}

double Rectangle::getHeight() {
    return height_;
}

double Rectangle::getArea(){
    return height_*width_;
}