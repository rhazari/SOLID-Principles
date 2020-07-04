#pragma once
#include "IWriter.h"
#include <string>

class FileStorage final : public IWriter {
    public:
        FileStorage();
        ~FileStorage();

        void WriteTo(const std::string& filePath);
};