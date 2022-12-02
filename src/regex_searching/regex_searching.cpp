#include <iostream>
#include <regex>


void regexSearch(std::string text, std::regex reg)
{
    std::smatch result;
    if (std::regex_search(text, result, reg))
    {
        std::cout << result[0] << std::endl;
        return;
    }
    std::cout << "Found nothing";
}