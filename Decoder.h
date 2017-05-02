#ifndef DECODER
#define DECODER

#include <iostream>

#include "Cipher.h"

class Decoder
{
    Cipher* cipher;
    std::string decodedCipher;

public:

    /// @brief konstruktor
    /// @param cipher szyfr
    Decoder(Cipher& cipher);

    /// @brief funkcja deszyfruj�ca
    void decode();

    /// @brief pobierz zdeszyfrowan� tre�� szyfru
    /// @returns zdeszyfrowana tre�� szyfru
    std::string getDecodedCipher();
};

#endif
