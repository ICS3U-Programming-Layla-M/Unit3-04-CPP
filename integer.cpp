// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Layla Michel
// Created on: May 11, 2021
// This program asks the user to input a number whole number
// and then displays whether it's positive, negative or zero

#include <iostream>

int main() {
    // declare variable
    int number;

    // get the user's number
    std::cout << "Enter a whole number: ";
    std::cin >> number;

    // check and display if number is positive, negative or zero
    if (number > 0) {
        std::cout << number << " is a positive number.\n";
    } else if (number < 0) {
        std::cout << number << " is a negative number.\n";
    } else {
        std::cout << number << " is just zero!.\n";
    }
}
