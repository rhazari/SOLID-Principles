#include "DatabaseWriter.h"
#include <iostream>

DatabaseWriter::DatabaseWriter() {
    std::cout<<"Calling DatabaseWriter() constructor\n";
}

DatabaseWriter::~DatabaseWriter(){
    std::cout<<"Calling ~DatabaseWriter() de-structor\n";
}

void DatabaseWriter::write(const char* data) {
    (void)data;
    std::cout<<"Writing data to the database\n";
}
