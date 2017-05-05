#ifndef CIPHER
#define CIPHER

#include <iostream>
#include "Alphabet.h"
#include "Parser.h"

class Cipher
{
    int shift;
    bool decoded;
    std::string cipher;
    Alphabet alphabet;

public:

    /// @brief konstruktor
    /// @param shift przesuniêcie znaków w szyfrze
    /// @param decoded wartość logiczną faktu zakodowania szyfru
    Cipher(Parser& parser);

    /// @brief pobierz treść szyfru
    /// @returns treść szyfru
    std::string getCipher();

    /// @brief pobierz przesunięcie znaków w szyfrze
    /// @returns przesunięcie znaków w szyfrze
    int getShift();

    Alphabet getAlphabet();

    /// @brief sprawdź czy szyfr jest zdekodowany
    /// @returns wartość logiczna faktu zdekodowania szyfru
    bool isDecoded();

    /// @brief ustaw nową treść szyfru
    /// @param cipher szyfr
    void setCipher(std::string cipher);

    /// @brief dodaj nową część szyfru na koniec istniej¹cego szyfru
    /// @param cipher nowa część szyfru
    void appendCipher(std::string cipher);

    /// @brief ustaw wartość logiczną faktu zakodowania szyfru
    /// @param decoded wartość logiczna faktu zakodowania szyfru
    void setDecoded(bool decoded);

};

#endif
