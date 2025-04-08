#include "ask.h"
#include <iostream>

bool ask::Ask(const std::string& text)
{
    std::cout << text;
    char c;
    
    while (true)
    {
        std::cin >> c;
        if (c == 'y' || c == 'Y') return true;
        if (c == 'n' || c == 'N') return false;
        std::cout << "Please answer by either y (yes) or n (no) >> ";
    }
}

float ask::AskF(const std::string& text)
{
    std::cout << text;
    float f;
    std::cin >> f;
    return f;
}
