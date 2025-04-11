/*
 * COSC 438 - Object Oriented Design
 * Math Quiz Generator
 * Authors: Devran YILDIZ, Carson Vance
 * Date: 04/11/2025
 *
 * Description:
 * This implementation file defines the member functions of the AnswerValidator class.
 * It handles setting the correct answer and validating the user's input during the quiz.
 */

#include "AnswerValidator.h"

 // Constructor: Initializes the correctAnswer to 0 (default value)
AnswerValidator::AnswerValidator() : correctAnswer(0) {}

// Method to set the correct answer for the current quiz problem
void AnswerValidator::setAnswer(int answer) {
    correctAnswer = answer;
}

// Method to validate the user's answer
// Compares the user's input with the correct answer and returns true if they match, otherwise false
bool AnswerValidator::validateAnswer(int userAnswer) {
    return userAnswer == correctAnswer;  // Returns true if the user's answer is correct
}
