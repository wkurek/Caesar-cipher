#ifndef STREAMWRITER
#define STREAMWRITER

#include <iostream>
#include "Cipher.h"

class StreamWriter
{
    std::string path;

public:

    /// @brief konstruktor
    /// @param path œcie¿ka do pliku z treœci¹ szyfru
    StreamWriter(std::string path);

    /// @brief operator strumienia wyjœcia
    /// @param cipher szyfr
    /// @returns strumieñ wypisuj¹cy szyfr do pliku
    StreamWriter& operator<<(Cipher& cipher);
};

#endif
