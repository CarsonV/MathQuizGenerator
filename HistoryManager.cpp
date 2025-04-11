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

 // Method to add a score to the history
 // This method takes a Score object and adds it to the 'history' vector.
void HistoryManager::addHistory(Score score) {
    history.push_back(score);  // Adds the given score to the history vector
}

// Method to retrieve the score history
// This method returns the entire 'history' vector, which contains all the stored scores.
std::vector<Score> HistoryManager::getHistory() {
    return history;  // Returns the vector containing all score history
}
