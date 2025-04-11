/*
 * COSC 438 - Object Oriented Design
 * Math Quiz Generator
 * Authors: Devran YILDIZ, Carson Vance
 * Date: 04/11/2025
 *
 * Description:
 * This header file defines the UserDatabase class, which manages
 * basic user data including username and score history. This allows
 * the application to track scores for individual users.
 */

#pragma once
#include <string>
#include <vector>
#include "Score.h"

class UserDatabase {
private:
    std::string username;            // Stores the current user's name
    std::vector<Score> history;      // Stores a history of the user's scores

public:
    // Sets the username for the current session
    void setUsername(const std::string& uname);

    // Saves a new score to the user's history
    void saveUserInfo(const Score& score);

    // Getter for username
    std::string getUsername() const;

    // Getter for user's score history
    std::vector<Score> getHistory() const;
};
