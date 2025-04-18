/*
 * COSC 438 - Object Oriented Design
 * Math Quiz Generator
 * Authors: Devran YILDIZ, Carson Vance
 * Date: 04/11/2025
 *
 * Description:
 * This header defines the QuizUI class which serves as the user interface controller
 * for the Math Quiz Generator. It ties together all the core components like problem
 * generation, input validation, score tracking, and score history.
 */

#pragma once

#include "MathProblemGenerator.h"
#include "AnswerValidator.h"
#include "ScoreManager.h"
#include "InputField.h"
#include "HistoryManager.h"

#include <QMainWindow>
#include "ui_MainUI.h"

 // The QuizUI class acts as the main interface for interacting with the user
class QuizUI : public QMainWindow {

    Q_OBJECT

private:
    ScoreManager scoreManager;             // Manages the user's score
    InputField answerField;                // Handles user input (currently unused)
    MathProblemGenerator generator;        // Generates math problems based on difficulty
    AnswerValidator validator;             // Validates user input against the correct answer
    HistoryManager historyManager;         // Stores and retrieves score history

    Ui::MainUIClass ui;

private slots:
    void on_submitButton_clicked();
    void on_nextButton_clicked();


public:
    // Sets the difficulty level for the quiz (easy, medium, hard)
    void setDifficulty(const std::string& level);

    // Displays a quiz question and processes user input
    void displayQuiz();

    // Displays the current score and saves it to history
    void showScore();

    // Displays the user's score history from past attempts
    void showHistory();

    QuizUI(QWidget* parent = nullptr);
    ~QuizUI();
};
