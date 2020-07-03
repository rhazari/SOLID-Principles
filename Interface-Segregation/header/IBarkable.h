#pragma once

class IBarkable {
    public:
        IBarkable() = default;
        ~IBarkable() = default;
        virtual void bark() = 0;
};