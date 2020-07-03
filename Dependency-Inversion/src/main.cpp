#include "../header/EncryptService.h"
#include "../header/FileReader.h"
#include "../header/DatabaseWriter.h"

#include <memory>

int main() {
    EncryptService service;
    auto fileReader = std::make_unique<FileReader>();
    auto databaseWriter = std::make_unique<DatabaseWriter>();

    service.encrypt(fileReader.get(), databaseWriter.get());

}