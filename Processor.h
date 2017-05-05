#ifndef PROCESSOR
#define PROCESSOR

#include <iostream>

#include "Cipher.h"

class Processor
{
public:

    Cipher* cipher;
    std::string text;

    Processor(Cipher& cipher)
    {
        this->cipher = &cipher;
    }

    void process();
};

#endif
