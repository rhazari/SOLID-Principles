#pragma once
#include "IWriter.h"

class DatabaseWriter final: public IWriter {
    public:
        DatabaseWriter();
        ~DatabaseWriter();

        void write(const char* data) override;
};