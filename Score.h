/*
 * COSC 438 - Object Oriented Design
 * Math Quiz Generator
 * Authors: Devran YILDIZ, Carson Vance
 * Date: 04/11/2025
 *
 * Description:
 * This header file defines the Score class, which is used to store and represent
 * an individual score value within the math quiz application. It is useful for tracking
 * and managing quiz history.
 */

#pragma once
#include <fstream>

class Score {
public:
    int value;  // Holds the score value

    // Constructors
    Score();             // Default constructor
    Score(int v);        // Parameterized constructor

    // File I/O operations
    void saveToFile(std::ofstream& out) const;
    void loadFromFile(std::ifstream& in);
};
