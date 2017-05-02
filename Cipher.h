#ifndef CIPHER
#define CIPHER

#include <iostream>

class Cipher
{
    int shift;
    bool decoded;
    std::string cipher;

public:

    /// @brief konstruktor
    /// @param shift przesuni�cie znak�w w szyfrze
    /// @param decoded warto�� logiczn� faktu zakodowania szyfru
    Cipher(int shift, bool decoded);

    /// @brief pobierz tre�� szyfru
    /// @returns tre�� szyfru
    std::string getCipher();

    /// @brief pobierz przesuni�cie znak�w w szyfrze
    /// @returns przesuni�cie znak�w w szyfrze
    int getShift();

    /// @brief sprawd� czy szyfr jest zdekodowany
    /// @returns warto�� logiczna faktu zdekodowania szyfru
    bool isDecoded();

    /// @brief ustaw now� tre�� szyfru
    /// @param cipher szyfr
    void setCipher(std::string cipher);

    /// @brief dodaj now� cz�� szyfru na koniec istniej�cego szyfru
    /// @param cipher nowa cz�� szyfru
    void appendCipher(std::string cipher);

    /// @brief ustaw warto�� logiczn� fakt zakodowania szyfru
    /// @param decoded warto�� logiczn� faktu zakodowania szyfru
    void setDecoded(bool decoded);

};

#endif
