#pragma once
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"
#include <iostream>

class Graphics {
    public:
        Graphics() = default;
        ~Graphics() = default;

        // Whenever we add a new Shape, we don't need to modify this function
        void drawShape(Shape* shape) {
            if(!shape){
                std::cout<<"Its a null pointer\n";
                return;
            }
            shape->draw();
        }
};