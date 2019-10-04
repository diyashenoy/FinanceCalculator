#include <iostream>
#include<string.h>
#include "monthly_loan_payment.hpp"
#include "inflation.hpp"

int main()
{
    char choice[1], next[1];

    do
        {
            std::cout << "Enter what you want to calculate: " ;
            std::cin>>choice;

            if (strcmp(choice, "M") == 0 || strcmp(choice, "m") == 0)
            {
                monthly_payment();
            }
            else if (strcmp(choice, "I") == 0 || strcmp(choice, "i") == 0)
            {
                inflation();
            }
            else if (strcmp(choice, "R") == 0 || strcmp(choice, "r") == 0)
            {
                std::cout << "real interest rate" << std::endl;
            }
            else if(strcmp(choice, "Y") == 0 || strcmp(choice, "y") == 0)
            {
                std::cout << "years to saving goal" << std::endl;
            }

            std::cout << "Do you want to do another calculation [y/n]?" << std::endl;
            std::cin>>next;

    }while(strcmp(next, "Y") == 0 || strcmp(next, "y") == 0);

    return 0;
}