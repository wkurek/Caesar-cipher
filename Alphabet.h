#ifndef ALPHABET
#define ALPHABET

#include <iostream>
#include <deque>

class Alphabet
{
    std::deque<char> signs;

    /// @brief funkcja zwracaj�ca liczb� element�w w alfabecie
    /// @returns liczba element�w w alfabecie
    int size();

    /// @brief funkcja sprawdzaj�ca czy podany znak nale�y do alfabetu
    /// @param c znak
    /// @returns warto�� logiczna zawierania znaku w alfabecie
    bool contains(char c);

public:

    /// @brief konstruktor z warto�ci� domy�ln�
    /// @param alphabet alfabet
    Alphabet(std::string alphabet="ABCDEFGHIJKLMNOPQRSTUVWXYZ");

    /// @brief operator cyklicznego dost�pu do element�w alfabetu
    /// @param index pozycja znaku w alfabecie
    /// @returns znak alfabetu
    char operator[](int index);

    /// @brief funkcja zwracaj�ca pozycj� na, kt�rej znajduje si� znak w alfabecie
    /// @param c znak
    /// @returns pozycja znaku w alfabecie
    /// @retval -1 je�li znak nie wyst�puje w alfabecie
    int getPosition(char c);

};


#endif
