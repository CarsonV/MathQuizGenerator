/*
 * COSC 438 - Object Oriented Design
 * Math Quiz Generator
 * Authors: Devran YILDIZ, Carson Vance
 * Date: 04/11/2025
 *
 * Description:
 * This source file defines the methods of the HistoryManager class. The methods
 * manage the storage and retrieval of quiz scores in the application's history.
 */

#include "HistoryManager.h"
#include <fstream>

void HistoryManager::addHistory(Score score) {
    history.push_back(score);  // Adds a score to the history
}

std::vector<Score> HistoryManager::getHistory() {
    return history;  // Returns the vector of scores
}

void HistoryManager::saveHistoryToFile(const std::string& filename) const {
    std::ofstream outFile(filename);
    if (outFile.is_open()) {
        outFile << history.size() << '\n';  // Save number of scores
        for (const auto& score : history) {
            score.saveToFile(outFile);  // Save each score
        }
        outFile.close();
    }
}

void HistoryManager::loadHistoryFromFile(const std::string& filename) {
    std::ifstream inFile(filename);
    if (inFile.is_open()) {
        size_t size;
        inFile >> size;  // Read the number of scores
        history.clear();
        for (size_t i = 0; i < size; ++i) {
            Score s;
            s.loadFromFile(inFile);  // Load each score
            history.push_back(s);
        }
        inFile.close();
    }
}
