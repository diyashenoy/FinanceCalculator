cmake_minimum_required(VERSION 3.13)
project(FinanceCalculator)

set(CMAKE_CXX_STANDARD 14)

add_executable(FinanceCalculator main.cpp
        monthly_loan_payment.cpp monthly_loan_payment.hpp
        inflation.cpp inflation.hpp)