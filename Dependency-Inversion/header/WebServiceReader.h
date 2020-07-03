#pragma once
#include "IReader.h"

class WebServiceReader final: public IReader {
    public:
        WebServiceReader();
        ~WebServiceReader();

        char* read() override;
};