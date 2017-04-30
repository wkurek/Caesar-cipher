#ifndef STREAMWRITER
#define STREAMWRITER

#include <iostream>
#include "Cipher.h"

class StreamWriter
{
    std::string path;

public:

    StreamWriter(std::string path);

    StreamWriter& operator<<(Cipher& cipher);
};

#endif
