/*
 * COSC 438 - Object Oriented Design
 * Math Quiz Generator
 * Authors: Devran YILDIZ, Carson Vance
 * Date: 04/11/2025
 *
 * Description:
 * This header file defines the ScoreHistory class, which is responsible for
 * maintaining a record of previous scores in the quiz application.
 * It allows scores to be added and retrieved for history tracking.
 */

#pragma once
#include <vector>
#include "Score.h"

 // ScoreHistory class keeps a log of score entries
class ScoreHistory {
private:
    std::vector<Score> history;  // Vector to store all scores

public:
    // Adds a score to the history
    void addHistory(Score score);

    // Returns the list of all previous scores
    std::vector<Score> getHistory();
};
