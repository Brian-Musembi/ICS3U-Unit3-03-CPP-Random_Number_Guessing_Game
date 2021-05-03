// Copyright (c) 2021 Brian Musembi All Rights Reserved
//
// Created by: Brian Musembi
// Created on: 02 May 2021
// This program allows the user to guess the correct number

#include <iostream>
#include <random>

int main() {
    // this function allows the user to guess the correct number
    int answer;
    int guess;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0,100]
    answer = idist(rgen);

    // input
    std::cout << "Enter a number between 0 - 9: ";
    std::cin >> guess;

    // process
    if (guess == answer) {
            // output
            std::cout << "You guessed correct!";
            std::cout << "" << std::endl;
    // process
}   else {
            // output
            std::cout << "Incorrect, the number was: " << answer;
            std::cout << "" << std::endl;}
            std::cout << "Done." << std::endl;
}
