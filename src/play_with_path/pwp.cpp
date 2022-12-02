#include <regex>
#include <iostream>


void prot()
{
    std::string expression = R"(C:/Users/loler.txt)";
    std::smatch result;
    std::regex reg("^([A-Z]:/?)"
                   "([A-Za-z0-9_]*)"
                   "(/?)"
                   "([A-Za-z0-9_]*)"
                   "(.[a-z]*)");
    std::cout << std::regex_search(expression, result, reg)<< " " << result[0] 
              << "\na) " << result[1] << result[2] << result[3]
              << "\nb) " << result[4] << result[5]
              << "\nc) " << result[5]
              << "\nd) " << result[4]
              << "\ne) " << result[2]
              << "\nf) " << result[1] << result[2] << result[3] << result[4] << ".html";
    
}


