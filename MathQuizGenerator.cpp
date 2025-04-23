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

#include <QApplication>

// Currently is just a driver for spawning the main QtApplication
int main(int argc, char* argv[]) {

   
    QApplication app(argc, argv); // main Qt application controling application state with the OS
    QuizUI w;
    
    w.show();
    return app.exec();

    
}
