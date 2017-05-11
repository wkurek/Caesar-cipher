#include <iostream>

#include "Cipher.h"

using namespace std;

Cipher::Cipher(Parser& parser)
{
    this->alphabet = parser.alphabet;
    this->shift = parser.shift;

    if(!parser.mode.compare("encode")) this->decoded = true;
    else this->decoded = false;

}

void Cipher::setCipher(std::string cipher)
{
    this->cipher = cipher;
}

void Cipher::appendCipher(std::string cipher)
{
    this->cipher.append(cipher);
}

void Cipher::setDecoded(bool decoded)
{
    this->decoded = decoded;
}


string Cipher::getCipher()
{
    return this->cipher;
}

int Cipher::getShift()
{
    return this->shift;
}

Alphabet Cipher::getAlphabet()
{
    return this->alphabet;
}

bool Cipher::isDecoded()
{
    return this->decoded;
}

