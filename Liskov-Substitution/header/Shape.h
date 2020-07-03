#pragma once

class Shape {
    public:
        Shape() = default;
        ~Shape() = default;
        virtual double getArea() = 0;
};