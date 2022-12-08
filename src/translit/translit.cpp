#include <iostream>
#include "../setString.hpp"

void Transliterate(std::string text)
{
    std::string rus[66]=
    {
    "А", "а", "Б", "б", "В", "в", "Г", "г", "Д", "д", "Е", "е", "Ж", "ж", "З", "з", "И", "и", "Й", "й", "К", "к", 
    "Л", "л", "М", "м", "Н", "н", "О", "о", "П", "п", "Р", "р", "С", "с", "Т", "т", "У", "у", "Ф", "ф", "Х", "х", 
    "Ц", "ц", "Ч", "ч", "Ш", "ш", "Щ", "щ", "Ь", "ь", "Ю", "ю", "Я", "я", "Ы", "ы", "Ъ", "ъ", "Ё", "ё", "Э", "э"
    };
 
    std::string eng[66]=
    {
    "A", "a", "B", "b", "V", "v", "G", "g", "D", "d", "E", "e", "Zh", "zh", "Z", "z", "I", "i", "J", "j", "K", "k",   
    "L", "l", "M", "m", "N", "n", "O", "o", "P", "p", "R", "r", "S",  "s",  "T", "t", "U", "u", "F", "f", "H", "h", 
    "Ts", "ts", "Ch", "ch", "Sh", "sh", "Shh", "shh", "'", "'", "Yu", "yu","Ya", "ya", "Y", "y", "", "", "Yo", "yo", "E", "e"
    };
 
    std::cout << "Enter the text: ";
    
    bool find = false;
    
    std::string ret;

    for (int i = 0; i <= text.length(); i++)
    {
        find = false;
        for (int j = 0; j < 66; j++)
        {
            if (text.substr(i,2).compare(rus[j]) == 0 )
            {    
                ret += eng[j]; 
                find = true; 
                i++; 
                break;
            }
        }
        if (!find) ret += text.substr(i,1);
    }
    std::cout << ret << std::endl;
}