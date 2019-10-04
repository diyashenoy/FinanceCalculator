//
// Created by Diya Shenoy on 2019-10-02.
//

#include <iostream>
#include <math.h>
#include "inflation.hpp"

void inflation()
{
    int start, end;
    double start_amount, rate, inflation_rate = 0;

    std::cout << "Enter the starting year: ";
    std::cin >> start;

    std::cout << "Enter the amount of " <<start<< " dollars: ";
    std::cin >> start_amount;

    std::cout << "Enter the ending year: ";
    std::cin >> end;

    std::cout << "Enter the inflation rate: ";
    std::cin >> rate;

    inflation_rate = pow((1+rate),(end-start)) * (start_amount);

    std::cout << "$" << start_amount << " in " << start << " has the same value as $" << inflation_rate << " in " << end << "." << std::endl;



}