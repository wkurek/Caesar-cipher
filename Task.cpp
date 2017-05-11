#include <iostream>

#include "Cipher.h"
#include "Decoder.h"
#include "Coder.h"
#include "StreamReader.h"
#include "StreamWriter.h"
#include "Task.h"
#include "Parser.h"

using namespace std;

bool Task::verifyUserData(Parser& parser)
{
    if(!(parser.inputFile).compare("") || !(parser.outputFile).compare("") || !(parser.mode).compare("")) return false;
    return true;
}


void Task::encode(Parser& parser)
{
    Cipher cipher(parser);

    StreamReader reader(parser.inputFile);
    reader>>cipher;

    Coder coder(cipher);
    coder.process();

    StreamWriter writer(parser.outputFile);
    writer<<cipher;
}

void Task::decode(Parser& parser)
{
    Cipher cipher(parser);

    StreamReader reader(parser.inputFile);
    reader>>cipher;

    Decoder decoder(cipher);
    decoder.process();

    StreamWriter writer(parser.outputFile);
    writer<<cipher;
}
