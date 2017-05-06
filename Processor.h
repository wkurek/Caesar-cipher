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
    /// @param cipher obiekt reprezentuj¹cy szyfr
    Processor(Cipher& cipher)
    {
        this->cipher = &cipher;
    }

    /// @brief funkcja przetwarzaj¹ca szyfr
    void process();
};

#endif
