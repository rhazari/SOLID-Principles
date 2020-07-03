#pragma once
#include "IReader.h"
#include "IWriter.h"

class EncryptService{
    public:
        EncryptService();
        ~EncryptService();

        void encrypt(IReader *r, IWriter *w);
    
    private:
        char* encryptionCall(const char* content);
};