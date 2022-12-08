#include <iostream>
#include "../setString.hpp"

bool checkPalindrome(std::string word)
{
	int len = word.size();
	for(int i = 0; i < len/2; ++i)
		if(word[i] != word[len-i-1])
			return false;
	return true;
}


void printResultPalindrome()
{
    std::string word = setStr();
    
    if (checkPalindrome(word))
    {
        std::cout << "Palindrome.";
        return;
    }
    std::cout << "Not a palindrome.";
}