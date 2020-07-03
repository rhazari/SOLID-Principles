#pragma once

class IWriter{
    public:
        IWriter() = default;
        virtual ~IWriter() = default;
        virtual void write(const char*) = 0;
};