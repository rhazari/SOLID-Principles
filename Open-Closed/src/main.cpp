#include "../header/Graphics.h"
#include <memory>
#include <iostream>

/*
    Open-Close Principle
    Open for extension: The behavior of the module can be extended
    Closed for modification: Source code not allowed to be modified
*/

int main() {
    auto graphics = std::make_unique<Graphics>();

    auto square = std::make_unique<Square>();
    auto rectangle = std::make_unique<Rectangle>();
    auto circle = std::make_unique<Circle>();

    graphics->drawShape(square.get());

    graphics->drawShape(rectangle.get());

    graphics->drawShape(circle.get());
}