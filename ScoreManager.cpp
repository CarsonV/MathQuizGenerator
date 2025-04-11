/*
 * COSC 438 - Object Oriented Design
 * Math Quiz Generator
 * Authors: Devran YILDIZ, Carson Vance
 * Date: 04/11/2025
 *
 * Description:
 * This source file implements the ScoreManager class, which is responsible for managing
 * and tracking the score of the user during the quiz. It provides functionality to
 * track score updates, display the score, and retrieve the current score.
 */

#include "ScoreManager.h"
#include <iostream>

 // Constructor initializes the score to 0 at the start
ScoreManager::ScoreManager() : score(0) {}

// Updates the score based on whether the user's answer is correct or not
void ScoreManager::trackScore(bool isCorrect) {
    if (isCorrect) {
        score += 10;  // Increment score by 10 points for correct answers
    }
    // No penalty for incorrect answers; score remains unchanged
}

// Displays the current score to the user
void ScoreManager::displayScore() const {
    std::cout << "Current Score: " << score << std::endl;  // Output the current score to console
}

// Returns the current score of the user
int ScoreManager::getScore() const {
    return score;  // Return the current score value
}
