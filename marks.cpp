// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Marwan Mashaly
// Created on: December 2019
// This program uses a 2D array to find the average

#include <math.h>
#include <iostream>
#include <list>


float calculate(std::list<int> listOfMarks) {
    // This function calculates the average of the user's marks

    // Variables
    float markAverage = 0;
    float averageDivider = 0;

    // Process
    for (float counter : listOfMarks) {
        markAverage = markAverage + counter;
        averageDivider += 1;
    }

    markAverage = markAverage/averageDivider;

    // Output
    markAverage = round(markAverage);
    return markAverage;
}

int main() {
    // This function outputs the average of marks inputted by the user

    // Variables and lists
    std::list<int> markList;
    float mark;
    float average;

    std::cout << "Enter your mark:";
    std::cin >> mark;
    markList.push_back(mark);
    while (mark != -1) {
        std::cout << "Enter your mark:";
        std::cin >> mark;
        markList.push_back(mark);
    }

    // Process
    markList.pop_back();
    average = calculate(markList);

    // Output
    std::cout << "" << std::endl;
    std::cout << "Your average is: " << average << std::endl;
}
