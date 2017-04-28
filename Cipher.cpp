#include <iostream>

#include "Cipher.h"

using namespace std;

Cipher::Cipher(int shift, bool decoded)
{
    this->shift = (shift % 26);
    this->decoded = decoded;
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

bool Cipher::isDecoded()
{
    return this->decoded;
}

