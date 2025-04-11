#pragma once

#include <QMainWindow>
#include "ui_MainUI.h"

class MainUI : public QMainWindow
{
	Q_OBJECT

public:
	MainUI(QWidget *parent = nullptr);
	~MainUI();

private:
	Ui::MainUIClass ui;
};
