/*
 * COSC 438 - Object Oriented Design
 * Math Quiz Generator
 * Authors: Devran YILDIZ, Carson Vance
 * Date: 04/11/2025
 *
 * Description:
 * This header file defines the AnswerValidator class, which is responsible for validating
 * user input answers during the quiz. The class compares the user's answer with the correct
 * answer and determines whether the user's response is correct or not.
 */

#pragma once

class AnswerValidator {
private:
    int correctAnswer;  // The correct answer to the current quiz problem

public:
    // Constructor that initializes the correctAnswer to 0
    AnswerValidator();

    // Method to set the correct answer for the current problem
    void setAnswer(int ans);

    // Method to validate the user's answer by comparing it to the correct answer
    bool validateAnswer(int userAnswer);
};
