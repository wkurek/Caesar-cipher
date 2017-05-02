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

    /// @brief funkcja deszyfruj¹ca
    void decode();

    /// @brief pobierz zdeszyfrowan¹ treœæ szyfru
    /// @returns zdeszyfrowana treœæ szyfru
    std::string getDecodedCipher();
};

#endif
