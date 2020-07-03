#include "../header/Graphics.h"
#include <memory>
#include <iostream>

/*
    Open-Close Principle
    Open for extension: The behavior of the module can be extended
    Closed for modification: Source code not allowed to be modified
*/

int main() {
    auto graphics = std::unique_ptr<Graphics>();

    auto square = std::unique_ptr<Square>();
    auto rectangle = std::unique_ptr<Rectangle>();
    auto circle = std::unique_ptr<Circle>();

    std::cout<<"I am here\n";

    graphics->drawShape(square.get());
    graphics->drawShape(rectangle.get());
    graphics->drawShape(circle.get());
}