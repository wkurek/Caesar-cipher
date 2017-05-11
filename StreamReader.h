#ifndef STREAMREADER
#define STREAMREADER

#include <iostream>
#include "Cipher.h"

class StreamReader
{
    std::string path;

public:

    /// @brief konstruktor
    /// @param path ścieżka do pliku z treścią szyfru
    StreamReader(std::string path);

    /// @brief operator strumienia wejścia
    /// @param cipher szyfr
    /// @returns strumień czytający szyfr z pliku
    StreamReader& operator>>(Cipher& cipher);
};

#endif
