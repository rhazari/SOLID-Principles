#pragma once
#include "Shape.h"

class Square final : public Shape {
    public:
        Square();
        ~Square();
        
        void setSize(double size);
        double getSize();
        double getArea() override;

    private:
        double size_;
};
