#ifndef CODER
#define CODER

#include <iostream>
#include "Cipher.h"
#include "Processor.h"

class Coder : public Processor
{
public:

    /// @brief konstruktor
    /// @param cipher obiekt reprezentuj¹cy szyfr
    Coder(Cipher& cipher):Processor(cipher) {};

    /// @brief funkcja szyfruj¹ca
    void process();
};

#endif
