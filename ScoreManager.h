/*
 * COSC 438 - Object Oriented Design
 * Math Quiz Generator
 * Authors: Devran YILDIZ, Carson Vance
 * Date: 04/11/2025
 *
 * Description:
 * This header file defines the ScoreManager class, which is responsible for managing
 * and tracking the score during the quiz game. The class provides methods to
 * update the score based on user input, display the score, and retrieve the current score.
 */

#pragma once
#include <iostream>
#include <string>


class ScoreManager {
private:
    int score;  // The current score of the user

public:
    // Constructor that initializes the score to 0
    ScoreManager();

    // Method to track and update the score based on the correctness of the user's answer
    void trackScore(bool isCorrect);

    // Method to display the current score to the user
    std::string displayScore() const;

    // Method to get the current score for use in other parts of the program
    int getScore() const;
};
