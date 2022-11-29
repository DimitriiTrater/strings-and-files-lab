#include <iostream>



std::string setText()
{
    std::string text;
    std::cout << "Enter text:";
    std::getline(std::cin, text);
    return text;
}



std::string encode(std::string text, int key)
{
    std::string cipher = "";

    for (int i = 0; i < text.length(); i++)
    {
        if (isupper(text[i]))
            cipher += (text[i] + key - 65) % 26 + 65;
        else if (islower(text[i]))
            cipher += (text[i] + key - 97 ) % 26 + 97;
        else
            cipher += text[i];
    }
    return cipher;
}

// hack all
void decode(std::string text)
{
    std::string result;
    for (int key = 0; key < 26; key++)
    {
        result = "";
        for (int i = 0; i < text.length(); i++)
        {
            if (isupper(text[i]))
            {
                if ((text[i] - key - 65) < 0)
                    result += 91 + (text[i] - key - 65);
                else
                    result += (text[i] - key - 65) % 26 + 65;
            }
            else if (islower(text[i]))
            {
                if ((text[i] - key - 97) < 0)
                    result += 123 + (text[i] - key - 97);
                else
                    result += (text[i] - key - 97) % 26 + 97;
            }
            else
                result += text[i];
        }
        std::cout << "Key: " << key << " Text: " << result << std::endl;
    }
}

void printResultCipher()
{
    int key;
    std::string text = setText();
    std::string cipher = encode(text, 3);

    std::cout << "Cipher text: " << cipher << std::endl << std::endl;

    decode(cipher);
}