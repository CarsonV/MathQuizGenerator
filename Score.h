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

class Score {
public:
    int value;  // Holds the score value

    // Constructor that initializes the score with a given value
    Score(int v);
};
