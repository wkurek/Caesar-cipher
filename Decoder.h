#ifndef DECODER
#define DECODER

#include <iostream>
#include "Cipher.h"
#include "Processor.h"

class Decoder : public Processor
{
public:

    /// @brief konstruktor
    /// @param cipher obiekt reprezentuj�cy szyfr
    Decoder(Cipher& cipher):Processor(cipher) {};

    /// @brief funkcja deszyfruj�ca
    void process();
};

#endif
