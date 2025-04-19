/*
 * COSC 438 - Object Oriented Design
 * Math Quiz Generator
 * Authors: Devran YILDIZ, Carson Vance
 * Date: 04/11/2025
 *
 * Description:
 * This source file implements the methods of the UserDatabase class,
 * which is responsible for managing user information including
 * usernames and score history.
 */

#include "UserDatabase.h"
#include <fstream>

// Sets the current user's name
void UserDatabase::setUsername(const std::string& uname) {
    username = uname;
}

// Adds a score to the user's score history
void UserDatabase::saveUserInfo(const Score& score) {
    history.push_back(score);
}

// Returns the current user's name
std::string UserDatabase::getUsername() const {
    return username;
}

// Returns the list of scores associated with the user
std::vector<Score> UserDatabase::getHistory() const {
    return history;
}

// Saves user data (username and score history) to a file
void UserDatabase::saveUserToFile(const std::string& filename) const {
    std::ofstream outFile(filename);
    if (outFile.is_open()) {
        outFile << username << '\n';  // Save username
        outFile << history.size() << '\n';  // Save the number of scores
        for (const auto& score : history) {
            score.saveToFile(outFile);  // Save each score
        }
        outFile.close();
    }
}

// Loads user data (username and score history) from a file
void UserDatabase::loadUserFromFile(const std::string& filename) {
    std::ifstream inFile(filename);
    if (inFile.is_open()) {
        std::getline(inFile, username);  // Read username
        size_t size;
        inFile >> size;  // Read the number of scores
        inFile.ignore();  // Ignore the newline character after the size
        history.clear();
        for (size_t i = 0; i < size; ++i) {
            Score s;
            s.loadFromFile(inFile);  // Load each score
            history.push_back(s);
        }
        inFile.close();
    }
}

