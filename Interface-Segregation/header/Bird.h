#include "IFlyable.h"

class Bird final: public IFlyable {
    public:
        Bird();
        ~Bird();
        void fly() override;
};