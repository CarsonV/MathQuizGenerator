/*
 * COSC 438 - Object Oriented Design
 * Math Quiz Generator
 * Authors: Devran YILDIZ, Carson Vance
 * Date: 04/11/2025
 *
 * Description:
 * This file defines the implementation of the QuizUI class, which acts as the user-facing
 * interface for the Math Quiz Generator. It handles displaying questions, accepting and
 * validating user input, tracking scores, and maintaining a score history.
 */

#include "QuizUI.h"
#include "Score.h"
#include <iostream>
#include <string>

 // Set the difficulty level for the quiz (easy/medium/hard)
void QuizUI::setDifficulty(const std::string& level) {
    generator.setDifficulty(level);  // Delegate to MathProblemGenerator
}

// Display one quiz problem, get input, validate it, and update the score
void QuizUI::displayQuiz() {
    Problem problem = generator.generateRandomProblem();  // Get a random math problem


    std::cout << "Solve: " << problem.question << std::endl;
    std::cout << "Your answer: ";

    validator.setAnswer(problem.answer);  // Set the correct answer for validation

    std::string userInput;
    std::getline(std::cin, userInput);  // Get user input as string

    try {
        int userAnswer = std::stoi(userInput);  // Convert to integer
        bool correct = validator.validateAnswer(userAnswer);  // Check if answer is correct

        scoreManager.trackScore(correct);  // Update score if correct
        std::cout << (correct ? "Correct!" : "Wrong!") << std::endl;
    }
    catch (...) {
        // Catch non-integer input and notify user
        std::cout << "Invalid input. Please enter a number.\n";
    }
}

// Display the current score and save it to history
void QuizUI::showScore() {
    scoreManager.displayScore();  // Show score on screen

    // Save current score to history
    Score score(scoreManager.getScore());
    historyManager.addHistory(score);
}

// Display a history of previous scores
void QuizUI::showHistory() {
    std::cout << "\nScore History:\n";
    std::vector<Score> scores = historyManager.getHistory();

    // Loop through all past scores and print them
    for (size_t i = 0; i < scores.size(); ++i) {
        std::cout << "Attempt " << i + 1 << ": " << scores[i].value << "\n";
    }
}

void QuizUI::on_submitButton_clicked()
{
   
    bool ok = false;
    int userAnswer = ui.answerLine->text().toInt(&ok);
    
    if (!ok) {
        ui.resultLabel->setText("Invalid input.Please enter a number.");
        return;
    }

    bool correct = validator.validateAnswer(userAnswer);  // Check if answer is correct
    scoreManager.trackScore(correct);  // Update score if correct

    ui.scoreLabel->setText(QString::fromStdString(scoreManager.displayScore()));

    ui.resultLabel->clear();
    ui.resultLabel->setText(correct ? "Correct!" : "Wrong!");

}

void QuizUI::on_nextButton_clicked()
{
    Problem problem = generator.generateRandomProblem();  // Get a random math problem

    ui.questionLabel->setText(QString::fromStdString(problem.question)); // QT set questionLabel to problem
    ui.answerLine->clear();
    ui.resultLabel->clear();

    validator.setAnswer(problem.answer);  // Set the correct answer for validation
}

QuizUI::QuizUI(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    on_nextButton_clicked();
}

QuizUI::~QuizUI()
{}