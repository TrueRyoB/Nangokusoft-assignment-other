#include "config.h"
#include <iostream>
#include <string.h>

Config config;

void log(const std::string& s)
{
    if (config.debug)
    {
        std::cout << s << std::endl;
    }
}

Config::Config()
{
    this->debug = false;
}

Config::~Config()
{
}

void Config::parse_flags(int argc, char** argv)
{
    for (int i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "debug") == 0)
        {
            this->debug = true;
            continue;
        }
        throw std::runtime_error("Error: unrecognized argument: ");
    }
}
