#include <iostream>

#include "Cipher.h"
#include "Decoder.h"
#include "Coder.h"
#include "StreamReader.h"
#include "StreamWriter.h"

using namespace std;

bool verifyUserData(int argc, char *argv[])
{
    if(argc < 3) return false;
    if(!isdigit((int) argv[0])) return false;

    string mode = argv[1];
    if(!mode.compare("code") || !mode.compare("decode")) return false;

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

    StreamReader reader(path, cipher);
    reader.read();

    Coder coder(cipher);
    coder.encode();

    StreamWriter writer(generateEncodedFileName(path), cipher);
    writer.write();
}

void decode(int shift, string path)
{
    Cipher cipher(shift, false);

    StreamReader reader(path, cipher);
    reader.read();

    Decoder decoder(cipher);
    decoder.decode();

    StreamWriter writer(generateDecodedFileName(path), cipher);
    writer.write();
}


int main(int argc, char *argv[])
{
    if(!verifyUserData(argc, argv))
    {
        cout<<"Incorrect data"<<endl;
        return 0;
    }

    string mode = argv[1];

    if(!mode.compare("code")) code((int) argv[0], argv[2]);
    else decode((int) argv[0], argv[2]);

    return 0;
}
