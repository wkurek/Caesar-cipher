#include <iostream>

#include "Task.h"

using namespace std;

int main(int argc, char *argv[])
{
    if(!Task::verifyUserData(argc, argv))
    {
        cout<<"Incorrect data. Launching parameters: shift, path to file, encode/decode."<<endl;
        return 0;
    }

    string mode = argv[3];


    if(!mode.compare("encode")) Task::code(atoi(argv[1]), argv[2]);
    else Task::decode(atoi(argv[1]), argv[2]);

    return 0;
}
