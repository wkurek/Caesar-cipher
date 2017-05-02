#ifndef STREAMWRITER
#define STREAMWRITER

#include <iostream>
#include "Cipher.h"

class StreamWriter
{
    std::string path;

public:

    /// @brief konstruktor
    /// @param path �cie�ka do pliku z tre�ci� szyfru
    StreamWriter(std::string path);

    /// @brief operator strumienia wyj�cia
    /// @param cipher szyfr
    /// @returns strumie� wypisuj�cy szyfr do pliku
    StreamWriter& operator<<(Cipher& cipher);
};

#endif
