#pragma once
#include "Shape.h"

class Circle final: public Shape {
    public:
        Circle();
        ~Circle();

        void draw() override;
};