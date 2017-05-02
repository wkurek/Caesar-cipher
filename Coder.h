#ifndef CODER
#define CODER

#include <iostream>

#include "Cipher.h"

class Coder
{
    Cipher* cipher;
    std::string encodedCipher;

public:

    /// @brief konstruktor
    /// @param cipher szyfr
    Coder(Cipher& cipher);

    /// @brief funkcja szyfruj�ca
    void encode();

    /// @brief pobierz zaszyfrowan� tre�� szyfru
    /// @returns zaszyfrowana tre�� szyfru
    std::string getEncodedCipher();
};

#endif
