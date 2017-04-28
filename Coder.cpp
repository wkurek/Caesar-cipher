#include <iostream>

#include "Cipher.h"
#include "Coder.h"

using namespace std;

Coder::Coder(Cipher& cipher)
{
    this->cipher = &cipher;
}

void Coder::encode()
{
    if(this->cipher->isDecoded()) return; // cipher is decoded

    string decodedCipher =  this->cipher->getCipher();
    int shift = this->cipher->getShift();

    for(auto c : decodedCipher)
    {
        if(isupper(c) && isalpha(c))
        {
            c-=65;
            c+=shift;
            c%=26;

            if(c < 0) c+=91;
            else c+=65;
        }
        else if(islower(c) && isalpha(c))
        {
            c-=97;
            c+=shift;
            c%=26;

            if(c < 0) c+=123;
            else c+=97;
        }

        this->encodedCipher.push_back((char) c);
    }

    this->cipher->setCipher(this->encodedCipher);
    this->cipher->setDecoded(false);
}

string Coder::getEncodedCipher()
{
    return this->encodedCipher;
}
