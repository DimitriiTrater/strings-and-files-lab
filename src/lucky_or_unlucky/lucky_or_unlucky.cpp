#include <iostream>


std::string setTicket()
{
    std::string a;
    std::cin >> a;
    return a;
}



bool ticketCheck()
{
    std::string ticket = setTicket();
    
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