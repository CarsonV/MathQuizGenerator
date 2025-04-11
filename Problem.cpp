/*
 * COSC 438 - Object Oriented Design
 * Math Quiz Generator
 * Authors: Devran YILDIZ, Carson Vance
 * Date: 04/11/2025
 *
 * Description:
 * This source file implements the constructors for the Problem class,
 * which represents a math problem consisting of a textual question and an integer answer.
 */

#include "Problem.h"

 // Default constructor
 // Initializes the question as an empty string and the answer to 0
Problem::Problem() : question(""), answer(0) {}

// Parameterized constructor
// Initializes the problem with a specific question and its correct answer
Problem::Problem(const std::string& q, int a)
    : question(q), answer(a) {
}
