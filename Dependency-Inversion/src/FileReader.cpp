#include "FileReader.h"
#include <iostream>

FileReader::FileReader() {
    std::cout<<"Calling FileReader() constructor\n";
}

FileReader::~FileReader() {
    std::cout<<"Calling ~FileReader() de-structor\n";
}

char* FileReader::read() {
    std::cout<<"Data read from the database\n";
    return nullptr;
}