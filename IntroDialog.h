#pragma once

#include <QDialog>
#include "ui_IntroDialog.h"

class IntroDialog : public QDialog
{
	Q_OBJECT

public:
	IntroDialog(QWidget *parent = nullptr);
	QString getDifficulty() const;
	QString getUsername() const;
	~IntroDialog();


private:
	Ui::IntroDialogClass ui;
};
