#include "../header/CloudStorage.h"
#include <iostream>

CloudStorage::CloudStorage() {
    std::cout<<"Calling the CloudStorage constructor\n";
}

CloudStorage::~CloudStorage() {
    std::cout<<"Calling the CloudStorage de-structor\n";
}

void CloudStorage::WriteTo(const std::string& filePath) {
    std::cout<<"File Path for cloud storage "<< filePath<<"\n";
}