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
