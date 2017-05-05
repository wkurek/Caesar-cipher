#ifndef PARSER
#define PARSER

#include <iostream>
#include "Alphabet.h"

class Parser
{
public:

    std::string inputFile, outputFile, mode;
    int shift;
    Alphabet alphabet;
    bool help;

    void parse(int argc, char *argv[]);

};


#endif
