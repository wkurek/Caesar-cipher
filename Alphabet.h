#ifndef ALPHABET
#define ALPHABET

#include <iostream>
#include <deque>

class Alphabet
{
    std::deque<char> signs;

    int size();

    bool contains(char c);

public:

    Alphabet(std::string alphabet="ABCDEFGHIJKLMNOPQRSTUVWXYZ");

    char operator[](int index);
    int getPosition(char c);

};


#endif
