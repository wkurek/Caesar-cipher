#ifndef CODER
#define CODER

#include <iostream>
#include "Cipher.h"
#include "Processor.h"

class Coder : public Processor
{
public:

    Coder(Cipher& cipher):Processor(cipher) {};

    void process();
};

#endif
