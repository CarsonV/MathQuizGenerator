/*
 * COSC 438 - Object Oriented Design
 * Math Quiz Generator
 * Authors: Devran YILDIZ, Carson Vance
 * Date: 04/17/2025
 *
 * Description:
 * This header defines the IntroDialog class which controls the general logic
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
#pragma once

#include <QDialog>
#include "ui_IntroDialog.h"

class IntroDialog : public QDialog
{
	//QT control object that links our .ui file with this class
	Q_OBJECT

public:
	// QT style constructor, entry point for this UI window
	IntroDialog(QWidget *parent = nullptr);
	
	// Returns difficulty from the QTComboBox on the dialog window
	QString getDifficulty() const;

	// Returns the username selected from the QTLineEdit on the dialog window
	QString getUsername() const;

	// QT style deconstructor
	~IntroDialog();


private:
	Ui::IntroDialogClass ui;
};
