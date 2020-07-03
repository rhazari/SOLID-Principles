#include "../header/Square.h"
#include "../header/Rectangle.h"
#include <memory>
#include <iostream>

/*
    Liskov Substitution Principle
    Functions that use pointers to base classes must be able to use objects of 
    derived classes without knowing it.
*/
void displayArea(Shape* shape){
    std::cout<<"Area of the shape: "<< shape->getArea()<<"\n";
}

int main(){
    auto rect = std::make_unique<Rectangle>();
    rect->setHeight(4);
    rect->setWidth(7);
    displayArea(rect.get());

    auto sq = std::make_unique<Square>();
    sq->setSize(5);
    displayArea(sq.get());
}