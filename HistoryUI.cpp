/*
 * COSC 438 - Object Oriented Design
 * Math Quiz Generator
 * Authors: Devran YILDIZ, Carson Vance
 * Date: 04/17/2025
 *
 * Description:
 * This file defines the implementation of HistoryUI class which renders our History page
 * accessed by hitting the History button on the main window. This class has a
 * custom constructor to help in rendering the history vector onto the QTListWidget
 * 
 * UI elements: The UI was designed using Qt Widgets Designer and are best viewed using that tool
 * 
 * File: HistoryUI.ui
 * 
 * scoreList - Application editable notepad that displays current scoring information - QListWidget
 */
#include "HistoryUI.h"

// QT constructor modified to accept a Score vector for display within its window
HistoryUI::HistoryUI(const std::vector<Score>& history, QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	for (size_t i = 0; i < history.size(); ++i) {
		QString entry = QString("Attempt %1: %2").arg(i + 1).arg(history[i].value);
		ui.scoreList->addItem(entry);  // Assuming QListWidget* scoreList
	}
}

HistoryUI::HistoryUI(QWidget* parent)
	:QMainWindow(parent)
{
	ui.setupUi(this);
}

HistoryUI::~HistoryUI()
{}
