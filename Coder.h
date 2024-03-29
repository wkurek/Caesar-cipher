#ifndef CODER
#define CODER

#include <iostream>
#include "Cipher.h"
#include "Processor.h"

class Coder : public Processor
{
public:

    /// @brief konstruktor
    /// @param cipher obiekt reprezentujący szyfr
    Coder(Cipher& cipher):Processor(cipher) {};

    /// @brief funkcja szyfrująca
    void process();
};

#endif
