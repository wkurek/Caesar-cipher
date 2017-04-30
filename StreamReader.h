#ifndef STREAMREADER
#define STREAMREADER

#include <iostream>
#include "Cipher.h"

class StreamReader
{
    std::string path;

public:

    StreamReader(std::string path);

    StreamReader& operator>>(Cipher& cipher);
};

#endif
