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

    /// @brief funkcja szyfruj¹ca
    void encode();

    /// @brief pobierz zaszyfrowan¹ treœæ szyfru
    /// @returns zaszyfrowana treœæ szyfru
    std::string getEncodedCipher();
};

#endif
