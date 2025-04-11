/*
 * COSC 438 - Object Oriented Design
 * Math Quiz Generator
 * Authors: Devran YILDIZ, Carson Vance
 * Date: 04/11/2025
 *
 * Description:
 * This header defines the MathProblemGenerator class, which is responsible for creating
 * math problems based on a selected difficulty level. It supports generating random problems
 * and retrieving a list of previously generated problems.
 */

#pragma once

#include "Problem.h"
#include <string>
#include <vector>

 // The MathProblemGenerator class handles the creation of math problems
class MathProblemGenerator {
private:
    std::string difficultyLevel;          // Stores the selected difficulty level (easy/medium/hard)
    std::vector<Problem> problemList;     // Stores the list of generated problems

public:
    // Constructor initializes the default difficulty and problem list
    MathProblemGenerator();

    // Sets the difficulty level (easy, medium, or hard)
    void setDifficulty(std::string level);

    // Generates and returns a single random problem based on the difficulty
    Problem generateRandomProblem();

    // Returns the list of all problems generated so far
    std::vector<Problem> getProblemList();
};
