#include <iostream>
#include <regex>
#include "../setString.hpp"


int checkInteger(std::smatch result, int num)
{
    int a = std::stoi(result[num]);
    return a;
}


int calculateExpression()
{
    std::string expression = setStr();
    std::smatch result;
    std::regex reg(
                    "([0-9]*)"
                    "([+/*-]?)"
                    "([0-9]*)"
                );

    if (std::regex_match(expression, result, reg))
    {
        int first = checkInteger(result, 1);
        int second = checkInteger(result, 3);
        if (result[2] == "+")
            return first + second;

        if (result[2] == "-")
            return first - second;

        if (result[2] == "*")
            return first * second;
        
        if (result[2] == "/")
            return first / second;
    }
    
    return 0;
}

void printResulExpression()
{
    std::cout << calculateExpression() << std::endl;
}