//
// Created by Diya Shenoy on 2019-09-29.
//

#include <iostream>
#include <math.h>
#include <iomanip>
#include "monthly_loan_payment.hpp"

void monthly_payment()
{
    double p, r, final = 0, discount_factor = 0 ;
    int t;

    std::cout << "Enter principal: ";
    std::cin >> p;

    std::cout << "Enter term (years): " ;
    std::cin >> t;
    t = 12*t; //to calculate for 12 months

    std::cout << "Enter annual interest rate: " ;
    std::cin >> r;
    r = r/12; //to reduce the interest from annually to monthly

    discount_factor = (pow((1+r),t) -1)/(r*(pow((1+r),t)));

    final = p/discount_factor;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Your monthly payment is: $" << final << "." << std::endl;

}

