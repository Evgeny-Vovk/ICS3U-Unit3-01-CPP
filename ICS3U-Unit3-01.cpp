// Copyright(c) 2022 Evgeny Vovk All rights reserved.
//
// Created by : Evgeny Vovk
// Created on : October 2022
// ICS3U-Unit3-01.cpp File, review in C++.

#include <iomanip>
#include <iostream>

int main() {
    // creating variables
    int firstNumber;
    int secondNumber;
    int total;

    // input
    std::cout << "Please type in the first number(integer): ";
    std::cin >> firstNumber;
    std::cout << "Second number you want to add them up(integer): ";
    std::cin >> secondNumber;

    // process
    total = firstNumber + secondNumber;

    // output
    std::cout << "\n" << firstNumber << " + " << secondNumber << " = " << total << ".";

    std::cout << "\n\n\nDone.\n";
}
