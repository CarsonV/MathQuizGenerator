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
 * 
 */

#include "QuizUI.h"
#include "Score.h"
#include <iostream>
#include <string>

#include "IntroDialog.h"
#include "HistoryUI.h"

 // Set the difficulty level for the quiz (easy/medium/hard)
void QuizUI::setDifficulty(const std::string& level) {
    generator.setDifficulty(level);  // Delegate to MathProblemGenerator
}

// Sets the UserDatabase object username for this session
void QuizUI::setUsername(const QString& user)
{
    userDB.setUsername(user.toStdString());
}


// Display the current score and save it to history
void QuizUI::showScore() {
    ui.scoreLabel->setText(QString::fromStdString(std::to_string(scoreManager.getScore())));  // Show score on screen

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

// Handles all answer submision and does checking for badly entered answers. On correct answers go to next question
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

    showScore();

    ui.resultLabel->clear();
    ui.resultLabel->setText(correct ? "Correct!" : "Wrong!");

    if (correct == true) //auto progress if we get the right answer
    {
        on_nextButton_clicked();
    }

}

// Inital problem generation as well as next button control. Since this starts problem generation it must be called from constructor
void QuizUI::on_nextButton_clicked()
{
    Problem problem = generator.generateRandomProblem();  // Get a random math problem

    ui.questionLabel->setText(QString::fromStdString(problem.question)); // QT set questionLabel to problems
    ui.answerLine->clear();
    ui.resultLabel->clear();

    validator.setAnswer(problem.answer);  // Set the correct answer for validation
}

// Save score to DB file so we can then read from it before showing HistoryUI screen
void QuizUI::on_historyButton_clicked()
{

    Score score(scoreManager.getScore());
    userDB.saveUserInfo(score);
    
    std::vector<Score> scores = userDB.getHistory();
    auto* h = new HistoryUI(scores,this);
    h->show();

}
// Exit main screen and save state, exit program at end
void QuizUI::on_exitButton_clicked()
{
    Score score(scoreManager.getScore());
    historyManager.saveHistoryToFile("scores.txt");
    userDB.saveUserToFile("users.txt");

    QApplication::quit(); //gracefully exit the program entirely
}

// Core QT constructor, this inherits QT rendering and kicks off the entire quiz program
// Calls the inital dialog to get user info and difficulty choice and saves state for next steps
QuizUI::QuizUI(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    on_nextButton_clicked(); // workaround but is here to ensure that we properly generate a problem before rendering the main window

    // Once everything else is prepared, render the intro dialog to get difficulty and username
    IntroDialog intro(this);


    // We are getting the Accepted status from when the OK button on the IntroDialog is pressed, this was setup within Qt Widgets Designer
    if (intro.exec() == QDialog::Accepted) {
        QString diff = intro.getDifficulty();
        QString username = intro.getUsername();
        QString displayUser = "User: " + username;

        setDifficulty(diff.toStdString());
        setUsername(username);
        
        // set UI elements on the main page to display username and difficulty settings
        ui.difficultyLabel->setText(diff);
        ui.usernameLabel->setText(displayUser);
    }
    
}

QuizUI::~QuizUI()
{}