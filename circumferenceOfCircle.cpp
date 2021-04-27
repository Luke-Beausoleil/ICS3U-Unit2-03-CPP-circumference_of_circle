// Copyright (c) 2021 Luke Beausoleil All rights reserved
//
// Created by: Luke Beausoleil
// Created on: April 2021
// This program calculates the circumference of a circle
//      using tau and inputted radius

#include <iostream>

int main() {
    // This function calculates the circumference of a circle
    const double TAU = 6.283185307179586;
    int radius;
    double circumference;

    // input
    std::cout << "Enter radius of the circle in mm: ";
    std::cin >> radius;

    // process
    circumference = TAU * radius;

    // output
    std::cout << "\nThe circumference is " << circumference <<
        "mm" << std::endl;
    std::cout << "\nDone." << std::endl;
}
