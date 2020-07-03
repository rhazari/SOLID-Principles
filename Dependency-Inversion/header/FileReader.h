#pragma once
#include "IReader.h"

class FileReader final: public IReader {
    public:
        FileReader();
        ~FileReader();

        char* read() override;
};