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
#include <string>
#include "Score.h"

class HistoryManager {
private:
    std::vector<Score> history;  // Stores the history of scores

public:
    // Method to add a score to the history
    void addHistory(Score score);

    // Method to retrieve the entire score history
    std::vector<Score> getHistory();

    // File I/O operations
    void saveHistoryToFile(const std::string& filename) const;
    void loadHistoryFromFile(const std::string& filename);
};

