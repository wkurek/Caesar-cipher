#ifndef TASK
#define TASK

#include <iostream>
#include "Parser.h"

class Task
{
public:

    static bool verifyUserData(Parser& parser);

    static void encode(Parser& parser);

    static void decode(Parser& parser);
};

#endif
