#ifndef PROCESSOR
#define PROCESSOR

#include <iostream>

#include "Cipher.h"

class Processor
{
public:

    Cipher* cipher;
    std::string text;

    /// @brief konstruktor
    /// @param cipher obiekt reprezentujący szyfr
    Processor(Cipher& cipher)
    {
        this->cipher = &cipher;
    }

    /// @brief funkcja przetwarzająca szyfr
    void process();
};

#endif
