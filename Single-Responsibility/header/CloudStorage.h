#pragma once
#include "IWriter.h"
#include <string>

class CloudStorage final : public IWriter {
    public:
        CloudStorage();
        ~CloudStorage();

        void WriteTo(const std::string& filePath);
};