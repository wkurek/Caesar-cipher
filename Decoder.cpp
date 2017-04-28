#include <iostream>

#include "Cipher.h"
#include "Decoder.h"

using namespace std;

Decoder::Decoder(Cipher& cipher)
{
    this->cipher = &cipher;
}

void Decoder::decode()
{
    if(this->cipher->isDecoded()) return; // cipher is decoded

    string encodedCipher =  this->cipher->getCipher();
    int shift = this->cipher->getShift();

    for(auto c : encodedCipher)
    {
        if(isupper(c) && isalpha(c))
        {
            c-=65;
            c-=shift;
            c%=26;

            if(c < 0) c+=91;
            else c+=65;
        }
        else if(islower(c) && isalpha(c))
        {
            c-=97;
            c-=shift;
            c%=26;

            if(c < 0) c+=123;
            else c+=97;
        }

        this->decodedCipher.push_back((char) c);
    }

    this->cipher->setCipher(this->decodedCipher);
    this->cipher->setDecoded(true);
}

string Decoder::getDecodedCipher()
{
    return this->decodedCipher;
}
