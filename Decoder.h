#ifndef DECODER
#define DECODER

#include <iostream>
#include "Cipher.h"
#include "Processor.h"

class Decoder : public Processor
{
public:

    /// @brief konstruktor
    /// @param cipher obiekt reprezentujący szyfr
    Decoder(Cipher& cipher):Processor(cipher) {};

    /// @brief funkcja deszyfrująca
    void process();
};

#endif
