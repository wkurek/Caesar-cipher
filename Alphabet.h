#ifndef ALPHABET
#define ALPHABET

#include <iostream>
#include <deque>

class Alphabet
{
    std::deque<char> signs;

    /// @brief funkcja zwracaj¹ca liczbê elementów w alfabecie
    /// @returns liczba elementów w alfabecie
    int size();

    /// @brief funkcja sprawdzaj¹ca czy podany znak nale¿y do alfabetu
    /// @param c znak
    /// @returns wartoœæ logiczna zawierania znaku w alfabecie
    bool contains(char c);

public:

    /// @brief konstruktor z wartoœci¹ domyœln¹
    /// @param alphabet alfabet
    Alphabet(std::string alphabet="ABCDEFGHIJKLMNOPQRSTUVWXYZ");

    /// @brief operator cyklicznego dostêpu do elementów alfabetu
    /// @param index pozycja znaku w alfabecie
    /// @returns znak alfabetu
    char operator[](int index);

    /// @brief funkcja zwracaj¹ca pozycjê na, której znajduje siê znak w alfabecie
    /// @param c znak
    /// @returns pozycja znaku w alfabecie
    /// @retval -1 jeœli znak nie wystêpuje w alfabecie
    int getPosition(char c);

};


#endif
