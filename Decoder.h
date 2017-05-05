#ifndef DECODER
#define DECODER

#include <iostream>
#include "Cipher.h"
#include "Processor.h"

class Decoder : public Processor
{
public:

    Decoder(Cipher& cipher):Processor(cipher) {};

    void process();
};

#endif
