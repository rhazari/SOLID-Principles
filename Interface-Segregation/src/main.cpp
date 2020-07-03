#include "../header/Bird.h"
#include "../header/Dog.h"
#include <memory>

/*
    Interface-Segregation Principle
    Clients should not depend on interfaces that it does not use
*/

int main() {
    auto bird = std::make_unique<Bird>();
    bird->fly();

    auto dog = std::make_unique<Dog>();
    dog->bark();
}