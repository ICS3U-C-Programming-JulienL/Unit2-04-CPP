// Copyright (c) 2023 Julien Lamoureux All rights reserved.
// .
// Created by: Julien Lamoureux
// Date: September 28, 2023
// This program calculates the cost of a pizza

#include <cmath>
#include <iostream>

int main() {
    // declare variables and constants
    int diameter;
    float subtotal, tax, total, roundedTotal;
    const float LABOR_COSTS = 2.00;
    const float RENTAL_COSTS = 2.25;
    const float INGREDIENTS_COSTS = 1.50;
    const float HST = 0.13;

    // get the diameter
    std ::cout << "Cost of a Pizza program" << std::endl;
    std::cout << "Enter the desired diameter for your pizza (in): ";
    std::cin >> diameter;

    // calculate subtotal, tax, and total
    subtotal = INGREDIENTS_COSTS * diameter + LABOR_COSTS + RENTAL_COSTS;
    tax = HST * subtotal;
    total = subtotal + tax;
    roundedTotal = round(total * 100.0) / 100.0;

    // display the total
    std ::cout << "Your total cost is $" << roundedTotal << std::endl;
}
