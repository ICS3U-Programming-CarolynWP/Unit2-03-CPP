// Copyright Carolyn
// Created by: Carolyn Webster Pless
// Created on: 22/09/27
// Uses user input for the radius and calculates the
// circumference of a circle using Tau

#include <iostream>

int main() {
    // TAU constant
    const float TAU = 6.28;
    // variables
    float radius;
    float circ;

    // title
    std::cout << "Circumference of a Circle (with Tau)\n";

    // user input
    std::cout << "Enter the radius (cm): ";
    std::cin >> radius;

    // calculation
    circ = radius * TAU;

    // output
    std::cout << "The circumference is = " << circ << " cm^2.\n";
}
