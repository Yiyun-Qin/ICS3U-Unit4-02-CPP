// Copyright (c) 2022 Yiyun Qin All rights reserved
//
// Created by Yiyun Qin
// Created in April 2022
// This is a math program, multiplying number from 1 to n

#include <iostream>
#include <string>

int main() {
    // This function multiplies number from 1 to number the user enters
    std::string multiplyString;
    int multiplyInteger;
    int product = 1;
    int loopCounter = 0;

    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> multiplyString;

    // process
    std::cout << "" << std::endl;
    try {
        multiplyInteger = std::stoi(multiplyString);
        if (multiplyInteger > 0) {
            do {
                loopCounter = loopCounter + 1;
                product = product * loopCounter;
            } while (loopCounter < multiplyInteger);
            std::cout << multiplyString << "!" << " = " << product << std::endl;
        } else if (multiplyInteger == 0) {
            std::cout << "0! = 1" << std::endl;
        } else {
            std::cout << "You did not enter a positive integer." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid number!" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
