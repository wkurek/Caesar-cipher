#include <iostream>
#include <fstream>

#include "Cipher.h"
#include "StreamReader.h"

using namespace std;

StreamReader::StreamReader(string path)
{
    this->path = path;
}

StreamReader& StreamReader::operator>>(Cipher& cipher)
{
    fstream readStream;
    readStream.exceptions(ifstream::failbit | ifstream::badbit);

    try
    {
        readStream.open(this->path, ios::in);

        if(!readStream.is_open()) throw new ifstream::failure("");

	if(readStream.peek() == ifstream::traits_type::eof()) return *this; //empty file

        while(!readStream.eof())
        {
            string buffer;
            getline(readStream, buffer);

            cipher.appendCipher(buffer+"\n");
        }

        readStream.close();
    }
    catch(ifstream::failure& exception)
    {
        cerr<<"[INPUTSTREAM ERROR]\t"<<"Cannot read from file properly"<<endl;
    }


    return *this;
}

