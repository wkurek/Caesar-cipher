#include <iostream>

#include "Cipher.h"
#include "Decoder.h"
#include "Coder.h"
#include "StreamReader.h"
#include "StreamWriter.h"
#include "Task.h"

using namespace std;

bool Task::verifyUserData(int argc, char *argv[])
{
    if(argc < 4) return false;

    string mode = argv[3];
    if(mode.compare("encode")!=0 && mode.compare("decode")!=0) return false;

    return true;
}

string Task::generateEncodedFileName(string path)
{
    path.erase(path.length()-4);
    path.append("ENCODED.txt");

    return path;
}

string Task::generateDecodedFileName(string path)
{
    path.erase(path.length()-4);
    path.append("DECODED.txt");

    return path;
}

void Task::code(int shift, string path)
{
    
Cipher cipher(shift, true);

    StreamReader reader(path);
    reader>>cipher;

    Coder coder(cipher);
    coder.encode();

    StreamWriter writer(generateEncodedFileName(path));
    writer<<cipher;
}

void Task::decode(int shift, string path)
{
    Cipher cipher(shift, false);

    StreamReader reader(path);
    reader>>cipher;

    Decoder decoder(cipher);
    decoder.decode();

    StreamWriter writer(generateDecodedFileName(path));
    writer<<cipher;
}
