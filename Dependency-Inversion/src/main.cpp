#include "../header/EncryptService.h"
#include "../header/FileReader.h"
#include "../header/DatabaseWriter.h"
#include "../header/WebServiceReader.h"

#include <memory>

/*
    Dependency-Inversion Principle
    High level modules should not depend on low-level modules; both should depend on abstarctions.
    Abstractions should not depend on details; details should depend on abstarctions.
*/

int main() {
    EncryptService service;
    auto fileReader = std::make_unique<FileReader>();
    auto databaseWriter = std::make_unique<DatabaseWriter>();

    service.encrypt(fileReader.get(), databaseWriter.get());

    auto webserviceReader = std::make_unique<WebServiceReader>();
    service.encrypt(webserviceReader.get(), databaseWriter.get());

}