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
