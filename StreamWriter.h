#ifndef STREAMWRITER
#define STREAMWRITER

#include <iostream>
#include "Cipher.h"

class StreamWriter
{
    std::string path;
    Cipher* cipher;

public:

    StreamWriter(std::string path, Cipher& cipher);

    void write();
};

#endif
