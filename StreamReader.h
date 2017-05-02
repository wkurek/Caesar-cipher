#ifndef STREAMREADER
#define STREAMREADER

#include <iostream>
#include "Cipher.h"

class StreamReader
{
    std::string path;

public:

    /// @brief konstruktor
    /// @param path œcie¿ka do pliku z treœci¹ szyfru
    StreamReader(std::string path);

    /// @brief operator strumienia wejœcia
    /// @param cipher szyfr
    /// @returns strumieñ czytaj¹cy szyfr z pliku
    StreamReader& operator>>(Cipher& cipher);
};

#endif
