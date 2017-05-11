#ifndef TASK
#define TASK

#include <iostream>
#include "Parser.h"

class Task
{
public:

    /// @brief funkcja sprawdzaj¹ca poprawnoœæ danych uruchomieniowych
    /// @param parser obiekt typu Parser zawieraj¹cy dane uruchomieniowe
    /// @returns wartoœæ logiczna poprawnoœci danych
    static bool verifyUserData(Parser& parser);

    /// @brief funkcja wykonujaca kompleksowe szyfrowanie
    /// @param parser obiekt typu Parser zawieraj¹cy dane uruchomieniowe
    static void encode(Parser& parser);

    /// @brief funkcja wykonujaca kompleksowe deszyfrowanie
    /// @param parser obiekt typu Parser zawieraj¹cy dane uruchomieniowe
    static void decode(Parser& parser);
};

#endif
