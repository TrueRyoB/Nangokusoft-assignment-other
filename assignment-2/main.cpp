#include <iostream>
#include "vector2.h"
#include "ask.h"
#include "config.h"

int main(int argc, char** argv)
{
    // Parse the flag already bruh
    config.parse_flags(argc, argv);
    
    // Ask if radian or degree expression
    bool isRadian = ask::Ask("Would you prefer a radian expression over degree? (y/n) >> ");
    
    // Ask the original coordinate one by one
    float x = ask::AskF("Type a coordinate of x value in figures >> ");
    float y = ask::AskF("Type a coordinate of y value in figures >> ");
    
    // Ask for the rotation degree
    float rot = ask::AskF("Type the values of rotation >> ");
    vector2 v = vector2(x, y, isRadian);
    v.rotateBy(rot);
    
    // Print the outcome
    std::cout << "Result >> ";
    v.print();
    std::cout << std::endl;
    
    return 0;
}
