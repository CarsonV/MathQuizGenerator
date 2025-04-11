/*
 * COSC 438 - Object Oriented Design
 * Math Quiz Generator
 * Authors: Devran YILDIZ, Carson Vance
 * Date: 04/11/2025
 *
 * Description:
 * This header file defines the InputField class, which handles the input
 * functionality for obtaining user input. It includes methods for getting
 * various types of user inputs as strings.
 */

#pragma once
#include <iostream>  // For std::cin and std::cout
#include <string>    // For std::string and std::getline

class InputField {
public:
    /*
     * Method to get user input as a string.
     * This method waits for the user to input a string and press Enter.
     * It returns the input string.
     */
    std::string getInput();         // Declaration only

    /*
     * Method to get a string input from the user.
     * This method is designed specifically for accepting user input
     * as a string, typically used for non-numeric input.
     * It returns the input string.
     */
    std::string getStringInput();   // Declaration only

    /*
     * Method to get user input for general use.
     * It prompts the user for input and returns the input as a string.
     * It can be used in different contexts to get user-provided text.
     */
    std::string getUserInput();     // Declaration only
};
