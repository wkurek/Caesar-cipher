#ifndef TASK
#define TASK

#include <iostream>
#include "Parser.h"

class Task
{
public:

    /// @brief funkcja sprawdzaj�ca poprawno�� danych uruchomieniowych
    /// @param parser obiekt typu Parser zawieraj�cy dane uruchomieniowe
    /// @returns warto�� logiczna poprawno�ci danych
    static bool verifyUserData(Parser& parser);

    /// @brief funkcja wykonujaca kompleksowe szyfrowanie
    /// @param parser obiekt typu Parser zawieraj�cy dane uruchomieniowe
    static void encode(Parser& parser);

    /// @brief funkcja wykonujaca kompleksowe deszyfrowanie
    /// @param parser obiekt typu Parser zawieraj�cy dane uruchomieniowe
    static void decode(Parser& parser);
};

#endif
