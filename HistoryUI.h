/*
 * COSC 438 - Object Oriented Design
 * Math Quiz Generator
 * Authors: Devran YILDIZ, Carson Vance
 * Date: 04/17/2025
 *
 * Description:
 * This header defines the HistoryUI class which renders our History page
 * accessed by hitting the History button on the main window. This class has a 
 * custom constructor to help in rendering the history vector onto the QTListWidget
 * 
 * UI elements: The UI was designed using Qt Widgets Designer and are best viewed using that tool
 * 
 * File: HistoryUI.ui
 * 
 * scoreList - Application editable notepad that displays current scoring information - QListWidget
 */
#pragma once

#include <QMainWindow>
#include "ui_HistoryUI.h"

#include <vector>
#include <Score.h>

class HistoryUI : public QMainWindow
{
	Q_OBJECT

public:
	HistoryUI(const std::vector<Score>& history, QWidget *parent = nullptr);

	//default 
	HistoryUI(QWidget* parent = nullptr);
	~HistoryUI();

private:
	Ui::HistoryUIClass ui;
};
