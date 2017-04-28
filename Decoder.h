#ifndef DECODER
#define DECODER

#include <iostream>

#include "Cipher.h"

class Decoder
{
    Cipher* cipher;
    std::string decodedCipher;

public:

    Decoder(Cipher& cipher);

    void decode();
    std::string getDecodedCipher();
};

#endif
