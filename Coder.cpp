#include <iostream>

#include "Cipher.h"
#include "Coder.h"

using namespace std;

void Coder::process()
{
    int shift = this->cipher->getShift();
    string cipherText = this->cipher->getCipher();

    for(char c : cipherText)
    {
        int position = this->cipher->getAlphabet().getPosition(c);

        if(position>=0)
        {
            char sign = this->cipher->getAlphabet()[position + shift];

            if(isalpha(c) && islower(c)) c = tolower(sign);
            else c = sign;
        }

        this->text.push_back(c);
    }

    this->cipher->setCipher(this->text);
    this->cipher->setDecoded(false);
}
