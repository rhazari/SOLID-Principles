#include "IBarkable.h"

class Dog: public IBarkable {
    public:
        Dog();
        ~Dog();
        void bark();
};