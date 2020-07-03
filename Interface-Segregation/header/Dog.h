#include "IBarkable.h"

class Dog final: public IBarkable {
    public:
        Dog();
        ~Dog();
        void bark() override;
};