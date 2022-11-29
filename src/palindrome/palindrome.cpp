#include <iostream>

std::string setString()
{
    std::string result;
    std::cout << "Enter string: ";
    std::cin >> result;
    return result;
}

bool check_palindrome(std::string word)
{
	int len = word.size();
	for(int i = 0; i < len/2; ++i)
	{
		if(word[i] != word[len-i-1])
		{
			return false;
		}
	}
	return true;
}


void printResultPalindrome()
{
    std::string word = setString();
    
    if (check_palindrome(word))
    {
        std::cout << "Palindrome.";
        return;
    }
    std::cout << "Not a palindrome.";
}