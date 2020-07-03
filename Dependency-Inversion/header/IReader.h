#pragma once

class IReader{
    public:
        IReader() = default;
        ~IReader() = default;
        virtual char* read() = 0;
};