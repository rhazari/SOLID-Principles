#pragma once
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"

class Graphics {
    public:
        Graphics() = default;
        ~Graphics() = default;

        // Whenever we add a new Shape, we don't need to modify this function
        void drawShape(Shape* shape) {
            shape->draw();
        }
};