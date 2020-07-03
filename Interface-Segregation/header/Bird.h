#include "IFlyable.h"

class Bird: public IFlyable {
    public:
        Bird();
        ~Bird();
        void fly();
};