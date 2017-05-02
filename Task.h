#ifndef TASK
#define TASK

#include <iostream>

class Task
{
public:

    /// @brief validacja parametrów uruchomieniowych programu
    /// @param argc ilość argumentów uruchomieniowych
    /// @param agrv tablica argumentów uruchomieniowych
    /// @returns wartość logiczna poprawności danych uruchomieniowych
    static bool verifyUserData(int argc, char *argv[]);

    /// @brief generowanie nazwy pliku dla zaszyfowanej treści szyfru
    /// @param path ścieżka do pliku z treścią szyfru
    /// @returns nazwa pliku dla zaszyfowanej treści szyfru
    static std::string generateEncodedFileName(std::string path);

    /// @brief generowanie nazwy pliku dla zdeszyfowanej treści szyfru
    /// @param path ścieżka do pliku z treścią szyfru
    /// @returns nazwa pliku dla zdeszyfowanej treści szyfru
    static std::string generateDecodedFileName(std::string path);

    /// @brief funkcja realizująca w całości szyfrowanie
    /// @param shift przesunięcie znaków w szyfrze
    /// @param path ścieżka do pliku z treścią szyfru
    static void code(int shift, std::string path);

    /// @brief funkcja realizująca w całości deszyfrowanie
    /// @param shift przesunięcie znaków w szyfrze
    /// @param path ścieżka do pliku z treścią szyfru
    static void decode(int shift, std::string path);
};

#endif
