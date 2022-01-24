// Copyright (c) 2022 Daniel Pawelko All rights reserved.
//
// Created by: Daniel Pawelko
// Created on: Jan 2022
// Max Num

#include <iostream>
#include <random>

using std::cout;
using std::endl;

int main() {
    // main function for max number

    // stuff for random
    std::random_device rd;
    std::mt19937 eng(rd());
    std::uniform_int_distribution<int> distr(1, 100);

    // defining variables
    int arr[10];
    int biggest = 0;

    // create array with 10 random numbers/process
    for (int rand = 0; rand < 10; rand++) {
        arr[rand] = distr(eng);
    }

    // add up arr/process
    for (int num = 0; num < 10; num++) {
        cout << "The random number is: " << arr[num] << endl;
        if (arr[num] > biggest) {
            biggest = arr[num];
        }
    }

    // output
    cout << endl;
    cout << "Biggest number is " << biggest << endl;

    // output finished
    cout << endl;
    cout << "Done." << endl;
}
