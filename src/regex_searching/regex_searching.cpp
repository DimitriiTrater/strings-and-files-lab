#include <iostream>
#include <regex>


void regexSearch(std::string text, std::string reg)
{
    int count = 0;
    int found = text.find(reg);
    
    while (found != std::string::npos)
    {
        count++;
        found = text.find(reg, found + 1);
    }
    std::cout << "Number of matches: " << count << std::endl;
}