/*
 * COSC 438 - Object Oriented Design
 * Math Quiz Generator
 * Authors: Devran YILDIZ, Carson Vance
 * Date: 04/11/2025
 *
 * Description:
 * This file implements the methods of the ScoreHistory class,
 * which is responsible for recording and retrieving score history.
 */

#include "ScoreHistory.h"

 // Adds a new Score object to the history vector
void ScoreHistory::addHistory(Score score) {
    history.push_back(score);
}

// Returns the vector containing all Score objects
std::vector<Score> ScoreHistory::getHistory() {
    return history;
}
