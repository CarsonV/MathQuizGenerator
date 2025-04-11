/*
 * COSC 438 - Object Oriented Design
 * Math Quiz Generator
 * Authors: Devran YILDIZ, Carson Vance
 * Date: 04/11/2025
 *
 * Description:
 * This implementation file contains the definitions for the methods in
 * the InputField class. These methods allow the program to capture input
 * from the user in various forms, typically as strings.
 */

#include "InputField.h"

 /*
  * getInput()
  * Description:
  * This method prompts the user for input and returns the input as a string.
  * It uses std::getline to read the entire line of input, allowing for spaces
  * and special characters. This method is typically used to capture any general
  * string input from the user.
  */
std::string InputField::getInput() {
    std::string input;
    std::getline(std::cin, input);  // Read the input from the user
    return input;                   // Return the user's input as a string
}

/*
 * getStringInput()
 * Description:
 * This method is designed to capture string input from the user.
 * Similar to getInput(), it uses std::getline to capture the full line
 * of text input by the user. It returns the input as a string, intended
 * for general text-based inputs.
 */
std::string InputField::getStringInput() {
    std::string input;
    std::getline(std::cin, input);  // Read the input from the user
    return input;                   // Return the user's input as a string
}

/*
 * getUserInput()
 * Description:
 * This method functions similarly to the other input methods in this file.
 * It reads input from the user and returns it as a string. It can be used
 * interchangeably with getInput() or getStringInput() depending on the context
 * in which it is called. This is a general-purpose method for obtaining user input.
 */
std::string InputField::getUserInput() {
    std::string input;
    std::getline(std::cin, input);  // Read the input from the user
    return input;                   // Return the user's input as a string
}
