// Copyright (c) 2020 Jonathan Pasco-Arnone all rights reserved
//
// Created by Jonathan Pasco-Arnone
// Created on January 2021
// This program uses an array

#include <iostream>
#include <random>


main() {
    // This function generates 10 random numbers and displays them

    int numbers[10];
    int sumOfNumbers;
    double average;
    int aSingleRandomNumber;

    std::cout << "" << std::endl;
    std::cout << "The following is 10 randomly generated numbers"
          " stored in the same variable." << std::endl;
    std::cout << "" << std::endl;

    for (int loopCounter = 0; loopCounter < 10; loopCounter++) {
        // Random number code
        std::random_device rseed;
        std::mt19937 rgen(rseed());  // mersenne_twister
        std::uniform_int_distribution<int> idist(0, 100);  // [0, 100]
        aSingleRandomNumber = idist(rgen);

        numbers[loopCounter] = aSingleRandomNumber;
    }
    for (int loopCounter = 0; loopCounter < 10; loopCounter++) {
        std::cout << "Random number" << loopCounter + 1 << ": "
              << numbers[loopCounter] << std::endl;
        sumOfNumbers += numbers[loopCounter];
    }
    std::cout << "" << std::endl;
    std::cout << "The sum is " << sumOfNumbers << " (this is "
          "the sum of the random numbers which will be used to test if the"
          " average is correct or not)" << std::endl;
    std::cout << "" << std::endl;
    average = 1.0 * sumOfNumbers / 10;
    std::cout << "The average is " << average << std::endl;
}
