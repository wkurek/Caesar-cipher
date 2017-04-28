#include <iostream>
#include <fstream>

#include "Cipher.h"
#include "StreamWriter.h"

using namespace std;

StreamWriter::StreamWriter(string path, Cipher& cipher)
{
    this->cipher = &cipher;
    this->path = path;
}


void StreamWriter::write()
{
    fstream writeStream;

    try
    {
        writeStream.open(this->path, ios::out);

        if(!writeStream.is_open()) throw new ifstream::failure("");

        writeStream << this->cipher->getCipher();

        writeStream.close();

    }
    catch(ifstream::failure& exception)
    {
        cerr<<"Cannot write to file properly"<<endl;
    }

    writeStream << this->cipher->getCipher();

    writeStream.close();
}
