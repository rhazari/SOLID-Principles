#include "EncryptService.h"
#include <iostream>

EncryptService::EncryptService(){
    std::cout<<"Constructing the Encrypt Service()\n";
}

EncryptService::~EncryptService(){
    std::cout<<"De-structing the Encrypt Service()\n";
}

void EncryptService::encrypt(IReader *r, IWriter *w){
    char* content = r->read();
    char* encryptContent = encryptionCall(content);
    w->write(encryptContent);
}

char* EncryptService::encryptionCall(const char* data) {
    (void)data;
    return nullptr;
}