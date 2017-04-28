#ifndef CODER
#define CODER

#include <iostream>

#include "Cipher.h"

class Coder
{
    Cipher* cipher;
    std::string encodedCipher;

public:

    Coder(Cipher& cipher);

    void encode();
    std::string getEncodedCipher();
};

#endif
