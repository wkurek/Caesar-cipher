#include <iostream>

#include "Cipher.h"
#include "Decoder.h"
#include "Coder.h"
#include "StreamReader.h"
#include "StreamWriter.h"

using namespace std;

bool verifyUserData(int argc, char *argv[])
{
    if(argc < 4) return false;
    //if(!isdigit(atoi(argv[1]))) return false;

    string mode = argv[3];
    if(mode.compare("encode")!=0 && mode.compare("decode")!=0) return false;

    return true;
}

string generateEncodedFileName(string path)
{
    path.erase(path.length()-4);
    path.append("ENCODED.txt");

    return path;
}

string generateDecodedFileName(string path)
{
    path.erase(path.length()-4);
    path.append("DECODED.txt");

    return path;
}

void code(int shift, string path)
{
    Cipher cipher(shift, true);

    StreamReader reader(path);
    reader>>cipher;

    Coder coder(cipher);
    coder.encode();

    StreamWriter writer(generateEncodedFileName(path));
    writer<<cipher;
}

void decode(int shift, string path)
{
    Cipher cipher(shift, false);

    StreamReader reader(path);
    reader>>cipher;

    Decoder decoder(cipher);
    decoder.decode();

    StreamWriter writer(generateDecodedFileName(path));
    writer<<cipher;
}


int main(int argc, char *argv[])
{

if(!verifyUserData(argc, argv))
{
    cout<<"Incorrect data. Launching parameters: shift, path to file, encode/decode."<<endl;
    return 0;
}

    string mode = argv[3];

    if(!mode.compare("encode")) code(atoi(argv[1]), argv[2]);
    else decode(atoi(argv[1]), argv[2]);

    return 0;
}
