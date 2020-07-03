#pragma once

class IFlyable {
    public:
        IFlyable() = default;
        ~IFlyable() = default;
        virtual void fly() = 0;
};