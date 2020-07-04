#pragma once

class Shape {
    public:
        Shape() = default;
        ~Shape() = default;
        virtual void draw() = 0;
};