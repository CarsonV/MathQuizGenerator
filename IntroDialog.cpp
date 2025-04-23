/*
 * COSC 438 - Object Oriented Design
 * Math Quiz Generator
 * Authors: Devran YILDIZ, Carson Vance
 * Date: 04/17/2025
 *
 * Description:
 * This file defines the implementation IntroDialog class which controls the general logic
 * used when rendering the IntroDialog.ui file. Specifically it provides as a
 * handler to get difficulty and username selection from the user before the
 * quiz starts.
 * 
 * UI elements: The UI was designed using Qt Widgets Designer and are best viewed using that tool
 * 
 * File: IntroDialog.ui
 * 
 * difficultyBox - Dropdown box to select one of three difficulties, Easy, Medium, Hard - QComboBox
 * usernameLine - Text line that allows user input for username - QLineEdit
 * okButton - This button is attached on the UI desiner to fire a Accept() signal to move to the next screen - QPushButton
 */
#include "IntroDialog.h"

 // QT style constructor, entry point for this UI window
IntroDialog::IntroDialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

// Returns difficulty from the QTComboBox on the dialog window
QString IntroDialog::getDifficulty() const
{
	return ui.difficultyBox->currentText();
}

// Returns the username selected from the QTLineEdit on the dialog window
QString IntroDialog::getUsername() const
{
	return ui.usernameLine->text();
}

// QT style deconstructor
IntroDialog::~IntroDialog()
{}
