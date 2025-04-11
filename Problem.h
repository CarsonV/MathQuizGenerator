/*
 * COSC 438 - Object Oriented Design
 * Math Quiz Generator
 * Authors: Devran YILDIZ, Carson Vance
 * Date: 04/11/2025
 *
 * Description:
 * The Problem class is a simple data structure that stores a math problem's
 * question as a string and its corresponding integer answer. It is used
 * throughout the quiz generator to represent generated problems.
 */

#pragma once
#include <string>

 // Represents a single math problem with a question and the correct answer
class Problem {
public:
    std::string question;  // The question to display to the user (e.g., "5 + 3 = ?")
    int answer;            // The correct answer to the question (e.g., 8)

    // Default constructor
    // Initializes the question as an empty string and answer as 0
    Problem();

    // Parameterized constructor
    // Initializes the question and answer with user-specified values
    Problem(const std::string& q, int a);
};
