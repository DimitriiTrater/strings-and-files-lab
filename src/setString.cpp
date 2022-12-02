#include <iostream>

// I just put this function in a separate header, because I used it very often

std::string setStr()
{
    std::string str;
    getline(std::cin, str);
    return str;
}