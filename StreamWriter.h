#ifndef STREAMWRITER
#define STREAMWRITER

#include <iostream>
#include "Cipher.h"

class StreamWriter
{
    std::string path;

public:

    /// @brief konstruktor
    /// @param path ścieżka do pliku z treścią szyfru
    StreamWriter(std::string path);

    /// @brief operator strumienia wyjścia
    /// @param cipher szyfr
    /// @returns strumień wypisujący szyfr do pliku
    StreamWriter& operator<<(Cipher& cipher);
};

#endif
