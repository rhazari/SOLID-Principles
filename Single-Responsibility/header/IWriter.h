#pragma once
#include <string>

class IWriter{
    public:
        IWriter() = default;
        ~IWriter() = default;
        virtual void WriteTo(const std::string& filePath) = 0;
};