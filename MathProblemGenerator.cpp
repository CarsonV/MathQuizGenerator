/*
 * COSC 438 - Object Oriented Design
 * Math Quiz Generator
 * Authors: Devran YILDIZ, Carson Vance
 * Date: 04/11/2025
 *
 * Description:
 * This source file implements the MathProblemGenerator class. It provides functionality
 * to generate random math problems based on the difficulty level, and store a history
 * of previously generated problems.
 */

#include "MathProblemGenerator.h"
#include <cstdlib>
#include <ctime>

 // Constructor initializes the random number generator with a seed based on current time
MathProblemGenerator::MathProblemGenerator() {
    srand((unsigned)time(0));  // Seed the random number generator for random problem generation
}

// Sets the difficulty level for generating problems (easy, medium, or hard)
void MathProblemGenerator::setDifficulty(std::string level) {
    difficultyLevel = level;  // Store the provided difficulty level
}

// Generates a random math problem based on the selected difficulty level
Problem MathProblemGenerator::generateRandomProblem() {
    int a, b;

    // Easy difficulty: Generates two random numbers between 1 and 10
    if (difficultyLevel == "easy") {
        a = rand() % 10 + 1;  // Random number between 1 and 10
        b = rand() % 10 + 1;  // Random number between 1 and 10
    }
    // Medium difficulty: Generates two random numbers between 1 and 50
    else if (difficultyLevel == "medium") {
        a = rand() % 50 + 1;  // Random number between 1 and 50
        b = rand() % 50 + 1;  // Random number between 1 and 50
    }
    // Hard difficulty: Generates two random numbers between 1 and 100
    else if (difficultyLevel == "hard") {
        a = rand() % 100 + 1;  // Random number between 1 and 100
        b = rand() % 100 + 1;  // Random number between 1 and 100
    }
    else {
        // Default to easy difficulty if invalid difficulty level is passed
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
    }

    // Construct the math question (e.g., "5 + 7 = ?")
    std::string question = std::to_string(a) + " + " + std::to_string(b) + " = ?";

    // Calculate the answer
    int answer = a + b;

    // Create a Problem object to store the question and answer
    Problem problem(question, answer);

    // Add the generated problem to the history list
    problemList.push_back(problem);

    // Return the generated problem
    return problem;
}

// Returns the list of all previously generated problems
std::vector<Problem> MathProblemGenerator::getProblemList() {
    return problemList;  // Return the history of generated problems
}
