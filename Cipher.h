#ifndef CIPHER
#define CIPHER

#include <iostream>

class Cipher
{
    int shift;
    bool decoded;
    std::string cipher;

public:

    Cipher(int shift, bool decoded);

    std::string getCipher();
    int getShift();
    bool isDecoded();

    void setCipher(std::string cipher);
    void appendCipher(std::string cipher);
    void setDecoded(bool decoded);

};

#endif
