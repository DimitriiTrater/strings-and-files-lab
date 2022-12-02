#include <iostream>

std::string setStr()
{
    std::string str;
    std::getline(std::cin, str);
    return str;
}



void strSubstr()
{
    std::cout << "Enter string: ";
    std::string s1 = setStr();
    std::cout << "Enter substing: ";
    std::string s2 = setStr();
    size_t count = 0;
 
    for(std::string::size_type i = 0; i < s1.length(); ++i)
        if(s1[i] == s2[0])
            if(s1.substr(i, s2.length()) == s2)
            {
                count++;
                i += s2.length() - 1;
            }
    std::cout << count;
}