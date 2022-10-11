// Copyright(c) 2022 Evgeny Vovk All rights reserved.
//
// Created by : Evgeny Vovk
// Created on : October 2022
// ICS3U-Unit3-01.cpp File, review in C++.

#include <iomanip>
#include <iostream>

int main() {
    // creating variables
    float firstNumber;
    float secondNumber;
    float total;

    // input
    std::cout << "Please type in the first number: ";
    std::cin >> firstNumber;
    std::cout << "Second number you want to add them up: ";
    std::cin >> secondNumber;

    // process
    total = firstNumber + secondNumber;

    // output
    std::cout << "\nThe total for numbers "
              << firstNumber << " and " << secondNumber << " is "
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << total << ".";

    std::cout << "\n\n\nDone.\n";
}
