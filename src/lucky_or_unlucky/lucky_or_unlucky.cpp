#include <iostream>


std::string setTicket()
{
    std::string a;
    int num = 0;
    
    std::cout << "Enter the ticket number ";
    std::cin >> a;

    if (a.size() != 6)
        throw "Invalid ticket";
    
    return a;
}

void checkAllElems(std::string str)
{
    for (int i = 0; i < str.size(); i++)
    {
        char element = str[i];
        int temp = element - '0';
        if (temp < 10)
            throw "Invalid ticket element";
    }
}

bool ticketCheck()
{
    std::string ticket = setTicket();
    
    checkAllElems(ticket);

    int sum_one = 0;
    int sum_two = 0;
    
    for (int i = 0; i < 3; i++)
    {
        char a = ticket[i];
        int t = a - '0';
        sum_one += t;
    }
    
    for (int i = 3; i < 6; i++)
    {
        char a = ticket[i];
        int t = a - '0';
        sum_two += t;
    }
    
    if (sum_one == sum_two)
        return true;

    return false;
}



void printResultTicketCheck()
{
    if (ticketCheck()) 
    {
        std::cout << "Lucky ticket!" << std::endl;
        return;
    }

    std::cout << "Unlucky ticket =(" << std::endl;
}