#pragma once

#include <QMainWindow>
#include "ui_HistoryUI.h"

class HistoryUI : public QMainWindow
{
	Q_OBJECT

public:
	HistoryUI(QWidget *parent = nullptr);
	~HistoryUI();

private:
	Ui::HistoryUIClass ui;
};
