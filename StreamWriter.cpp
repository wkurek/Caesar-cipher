#include <iostream>
#include <fstream>

#include "Cipher.h"
#include "StreamWriter.h"

using namespace std;

StreamWriter::StreamWriter(string path)
{
    this->path = path;
}

StreamWriter& StreamWriter::operator<<(Cipher& cipher)
{
    fstream writeStream;

    try
    {
        writeStream.open(this->path, ios::out);

        if(!writeStream.is_open()) throw new ifstream::failure("");

        writeStream << cipher.getCipher();

        writeStream.close();

    }
    catch(ifstream::failure& exception)
    {
        cerr<<"[OUTPUTSTREAM ERROR]\t"<<"Cannot write to file properly"<<endl;
    }


    return *this;
}

