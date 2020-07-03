#pragma once
#include "Shape.h"

class Rectangle final : public Shape {
    public:
        Rectangle();
        ~Rectangle();

        void setWidth(double width);
        void setHeight(double height);

        double getWidth();
        double getHeight();
        double getArea() override;

    private:
        double width_;
        double height_;
};