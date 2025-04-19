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
#include <fstream>

ScoreManager::ScoreManager() : score(0) {}

void ScoreManager::trackScore(bool isCorrect) {
    if (isCorrect) {
        score += 10;  // Increase score by 10 for correct answers
    }
    // No penalty for incorrect answers
}

void ScoreManager::displayScore() const {
    std::cout << "Current Score: " << score << std::endl;  // Display the score
}

int ScoreManager::getScore() const {
    return score;  // Return the current score
}

void ScoreManager::saveScoreToFile(const std::string& filename) const {
    std::ofstream out(filename);
    if (out.is_open()) {
        out << score;  // Save the current score
        out.close();
    }
}

void ScoreManager::loadScoreFromFile(const std::string& filename) {
    std::ifstream in(filename);
    if (in.is_open()) {
        in >> score;  // Load the score from the file
        in.close();
    }
}
