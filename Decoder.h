#ifndef DECODER
#define DECODER

#include <iostream>
#include "Cipher.h"
#include "Processor.h"

class Decoder : public Processor
{
public:

    /// @brief konstruktor
    /// @param cipher obiekt reprezentuj¹cy szyfr
    Decoder(Cipher& cipher):Processor(cipher) {};

    /// @brief funkcja deszyfruj¹ca
    void process();
};

#endif
