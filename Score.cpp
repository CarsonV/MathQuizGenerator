/*
 * COSC 438 - Object Oriented Design
 * Math Quiz Generator
 * Authors: Devran YILDIZ, Carson Vance
 * Date: 04/11/2025
 *
 * Description:
 * This implementation file defines the constructor for the Score class.
 * It initializes the score with a specific integer value, which can later
 * be used for tracking and displaying quiz performance.
 */

#include "Score.h"

Score::Score() : value(0) {}

Score::Score(int v) : value(v) {}

void Score::saveToFile(std::ofstream& out) const {
    out << value << '\n';
}

void Score::loadFromFile(std::ifstream& in) {
    in >> value;
}
