/*
 * COSC 438 - Object Oriented Design
 * Math Quiz Generator
 * Authors: Devran YILDIZ, Carson Vance
 * Date: 04/11/2025
 *
 * Description:
 * This is the main driver program for the Math Quiz Generator. The project demonstrates
 * object-oriented principles by generating math problems of varying difficulties using a
 * class hierarchy, randomization, user input/output, and score tracking. The program allows
 * users to choose a difficulty level, answer randomly generated math problems, and track
 * their score based on correct answers.
 */

#include <iostream>
#include "QuizUI.h"
#include "HistoryUI.h"


#include <QApplication>


int main(int argc, char* argv[]) {

    QApplication app(argc, argv);
    QuizUI w;
    HistoryUI x;
    w.show();
    //x.show();
    return app.exec();

    /*
    QuizUI quizApp;  // Initialize the main UI component for the quiz

    std::string difficulty;

    std::cout << "Welcome to the Math Quiz Generator!" << std::endl;

    // Prompt the user to select a difficulty level
    std::cout << "Select difficulty level (easy/medium/hard): ";
    std::cin >> difficulty;
    std::cin.ignore();  // Clear newline from input buffer

    // Set the selected difficulty in the quiz system
    quizApp.setDifficulty(difficulty);

    char choice;
    do {
        quizApp.displayQuiz();  // Display one math question
        quizApp.showScore();    // Show the current score

        // Ask the user if they want to try another question
        std::cout << "Do you want to try another question? (y/n): ";
        std::cin >> choice;
        std::cin.ignore();  // Clear newline again

    } while (choice == 'y' || choice == 'Y');  // Loop if user chooses to continue

    std::cout << "Thanks for playing!" << std::endl;
    quizApp.showScore();  // Final score display

    return 0;
    */
}
