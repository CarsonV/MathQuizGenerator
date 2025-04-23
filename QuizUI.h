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
 * 
 * UI elements: The UI was designed using Qt Widgets Designer and are best viewed using that tool
 * 
 * File: MainUI.ui
 * 
 * usernameLabel - Displays username, top left corner - QLabel
 * scoreLabel - Displays user score value, top center - QLabel
 * questionLabel - Displays current quiz question, middle center - QLabel
 * answerLine - Entry line for an answer, middle center - QLineEdit
 * submitButton - Button to check your answer for scoring - QPushButton
 * nextButton - Button to skip to the next question, skips scoring - QPushButton
 * historyButton - Spawns the HistoryUI screen in a new window as well as saving current state - QPushButton
 * exitButton - Saves current state to file and then calls program quit() - QPushButton
 * difficultyLabel - Displays difficulty selected, bottom left - QPushButton
 */

#pragma once

#include "MathProblemGenerator.h"
#include "AnswerValidator.h"
#include "ScoreManager.h"
#include "InputField.h"
#include "HistoryManager.h"
#include "UserDatabase.h"

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
    UserDatabase userDB;

    Ui::MainUIClass ui;

// slots are a Qt element and part of the Qt library signals and slots reactivity/messaging system.
// This allows for actions taken within the UI to be communicated to the backend code
private slots:

    // Handles all answer submision and does checking for badly entered answers. On correct answers go to next question
    void on_submitButton_clicked();

    // Inital problem generation as well as next button control. Since this starts problem generation it must be called from constructor
    void on_nextButton_clicked();
    void on_historyButton_clicked();
    void on_exitButton_clicked();


public:
    // Sets the difficulty level for the quiz (easy, medium, hard)
    void setDifficulty(const std::string& level);

    void setUsername(const QString& user);


    // Displays the current score and saves it to history
    void showScore();

    // Displays the user's score history from past attempts
    void showHistory();

    // Displays a quiz question and processes user input
    QuizUI(QWidget* parent = nullptr);
    ~QuizUI();
};
