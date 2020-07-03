#pragma once
#include "Shape.h"

class Rectangle final: public Shape {
    public:
        Rectangle();
        ~Rectangle();

        void draw() override;
};