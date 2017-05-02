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
    /// @param shift przesuniêcie znaków w szyfrze
    /// @param decoded wartoœæ logiczn¹ faktu zakodowania szyfru
    Cipher(int shift, bool decoded);

    /// @brief pobierz treœæ szyfru
    /// @returns treœæ szyfru
    std::string getCipher();

    /// @brief pobierz przesuniêcie znaków w szyfrze
    /// @returns przesuniêcie znaków w szyfrze
    int getShift();

    /// @brief sprawdŸ czy szyfr jest zdekodowany
    /// @returns wartoœæ logiczna faktu zdekodowania szyfru
    bool isDecoded();

    /// @brief ustaw now¹ treœæ szyfru
    /// @param cipher szyfr
    void setCipher(std::string cipher);

    /// @brief dodaj now¹ czêœæ szyfru na koniec istniej¹cego szyfru
    /// @param cipher nowa czêœæ szyfru
    void appendCipher(std::string cipher);

    /// @brief ustaw wartoœæ logiczn¹ fakt zakodowania szyfru
    /// @param decoded wartoœæ logiczn¹ faktu zakodowania szyfru
    void setDecoded(bool decoded);

};

#endif
