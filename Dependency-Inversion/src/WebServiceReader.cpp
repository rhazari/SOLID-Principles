#include "WebServiceReader.h"
#include <iostream>

WebServiceReader::WebServiceReader() {
    std::cout<<"Calling WebServiceReader() constructor\n";
}

WebServiceReader::~WebServiceReader() {
    std::cout<<"Calling ~WebServiceReader() de-structor\n";
}

char* WebServiceReader::read() {
    std::cout<<"Data read from the WebService\n";
    return nullptr;
}