#include <iostream>
#include <cstdlib>
#include <stdexcept>

#include "Parser.h"

using namespace std;


void Parser::parse(int argc, char *argv[])
{

    mode = inputFile = outputFile = "";
    shift = 0;
    help = false;

    for(int i=1; i < argc; i++)
    {
        string argument = argv[i];

        if(!argument.compare("-i") && (i+1)<argc)
        {
            inputFile = argv[++i];
            continue;
        }
        else if(!argument.compare("-o") && (i+1)<argc)
        {
            outputFile = argv[++i];
            continue;
        }
        else if(!argument.compare("-m") && (i+1)<argc)
        {
            mode = argv[++i];
            if(mode.compare("encode") && mode.compare("decode")) throw std::invalid_argument("Invalid mode");
            continue;
        }
        else if(!argument.compare("-a") && (i+1)<argc)
        {
            try
            {
                alphabet = Alphabet(std::string(argv[++i]));
                continue;

            }catch(std::invalid_argument ia)
            {
                throw ia;
            }

        }
        else if(!argument.compare("-s") && (i+1)<argc)
        {
            shift = atoi(argv[++i]);
            continue;
        }
        else if(!argument.compare("-h"))
        {
            help = true;
            cout<<"************ HELP ***********"<<endl;
            cout<<"\t-m encode/decode"<<endl;
            cout<<"\t-i input file"<<endl;
            cout<<"\t-o output file"<<endl;
            cout<<"\t-s shift"<<endl;
            cout<<"\t-a alphabet"<<endl;
            return;
        }

        throw std::invalid_argument("incorrect parameters");
    }
}
