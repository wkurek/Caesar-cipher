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

    /// @brief funkcja parsuj¹ca parametry uruchomieniowe podane przez u¿ytkownika
    /// @param argc iloœæ parametrów uruchomieniowych
    /// @param argv tablica parametrów uruchomieniowych
    void parse(int argc, char *argv[]);

};


#endif
