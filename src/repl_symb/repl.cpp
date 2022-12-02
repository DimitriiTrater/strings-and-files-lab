#include <iostream>
#include "../setString.hpp"


void repl()
{
    std::cout << "Enter text: ";
    std::string text = setStr();
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == ':')
            for (int j = 1; j < 9; j++)
                text[i+j] = '*';
    }

    std::cout << text << std::endl;
}