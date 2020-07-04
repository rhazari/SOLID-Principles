#include "../header/FileStorage.h"
#include <iostream>

FileStorage::FileStorage() {
    std::cout<<"Calling the FileStorage constructor\n";
}

FileStorage::~FileStorage() {
    std::cout<<"Calling the FileStorage de-structor\n";
}

void FileStorage::WriteTo(const std::string& filePath) {
    std::cout<<"File Path for file storage "<< filePath<<"\n";
}
