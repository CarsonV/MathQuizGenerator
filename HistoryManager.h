/*
 * COSC 438 - Object Oriented Design
 * Math Quiz Generator
 * Authors: Devran YILDIZ, Carson Vance
 * Date: 04/11/2025
 *
 * Description:
 * This header file defines the HistoryManager class. It is responsible for storing and
 * retrieving the history of scores. The class maintains a history of all the scores
 * earned during the quiz attempts and allows the user to view the score history.
 */

#pragma once

#include <vector>
#include "Score.h"

class HistoryManager {
private:
    std::vector<Score> history;  // Vector to store the score history

public:
    // Method to add a score to the history
    // Takes a Score object as a parameter and stores it in the history vector
    void addHistory(Score score);

    // Method to retrieve the entire score history
    // Returns a vector of Score objects containing all the scores in history
    std::vector<Score> getHistory();
};
