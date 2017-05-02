#ifndef STREAMREADER
#define STREAMREADER

#include <iostream>
#include "Cipher.h"

class StreamReader
{
    std::string path;

public:

    /// @brief konstruktor
    /// @param path �cie�ka do pliku z tre�ci� szyfru
    StreamReader(std::string path);

    /// @brief operator strumienia wej�cia
    /// @param cipher szyfr
    /// @returns strumie� czytaj�cy szyfr z pliku
    StreamReader& operator>>(Cipher& cipher);
};

#endif
