#pragma once
#include "Shape.h"

class Square final: public Shape {
    public:
        Square();
        ~Square();

        void draw() override;
};

