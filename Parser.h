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

    /// @brief funkcja parsuj�ca parametry uruchomieniowe podane przez u�ytkownika
    /// @param argc ilo�� parametr�w uruchomieniowych
    /// @param argv tablica parametr�w uruchomieniowych
    void parse(int argc, char *argv[]);

};


#endif
