#include <iostream>
#include <stdexcept>

#include "Task.h"
#include "Parser.h"


using namespace std;

int main(int argc, char *argv[])
{
    Parser parser;

    try
    {
        parser.parse(argc, argv);
    }
    catch(std::invalid_argument ia)
    {
        cerr<<"[INVALID PARAMETERS ERROR]\t"<<ia.what()<<endl;
        return 0;
    }

    if(parser.help) return 0;
    if(!Task::verifyUserData(parser))
    {
        cout<<"[INVALID PARAMETERS ERROR]\t"<<"Incorrect launching parameters"<<endl;
        return 0;
    }

    if(!parser.mode.compare("encode")) Task::encode(parser);
    else Task::decode(parser);

    return 0;
}
