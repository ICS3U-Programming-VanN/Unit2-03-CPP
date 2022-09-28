// Copyright (c) 2022 Van Nguyen All rights reserved.
//
// Created by: Van Nguyen
// Date: September 27th, 2022
// This program calculates and displays the circumference of a
// circle based on the user input using tau.


#include <iostream>

int main() {
    // Declaring Constants
    const float TAU = 6.28;

    // Initializing Variables
    float radius, circumference;

    // Gets user input for radius of circle
    std::cout << "Enter the radius of the circle (cm): ";
    std::cin >> radius;

    // Calculates Circumference of circle
    circumference = TAU * radius;

    // Displays the Circumference back to user
    std::cout << "\nThe circumference of the circle: " << circumference << "cm";
    std::cout << "\n";
}
