#ifndef STREAMREADER
#define STREAMREADER

#include <iostream>
#include "Cipher.h"

class StreamReader
{
    std::string path;
    Cipher* cipher;

public:

    StreamReader(std::string path, Cipher& cipher);

    void read();
};

#endif
