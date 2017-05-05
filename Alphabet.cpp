#include <iostream>
#include <stdexcept>

#include "Alphabet.h"

using namespace std;

bool Alphabet::contains(char c)
{
    if(this->getPosition(c) == -1) return false;
    return true;
}

Alphabet::Alphabet(std::string alphabet)
{
    for(auto sign : alphabet)
    {
        if(isalpha(sign) && islower(sign)) sign = toupper(sign);
        if(this->contains(sign)) throw std::invalid_argument("Duplicated sign");

        signs.push_back(sign);
    }
}

int Alphabet::size()
{
    return this->signs.size();
}

char Alphabet::operator[](int index)
{
    int size = this->size();

    index%=size;

    if(index < 0) return signs[size+index];
    else return signs[index];
}

int Alphabet::getPosition(char c)
{
    if(isalpha(c) && islower(c)) c = toupper(c);

    for(int i=0; i < signs.size(); i++)
    {
        if(c == signs[i]) return i;
    }

    return -1;
}
