#include "IntroDialog.h"

IntroDialog::IntroDialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

QString IntroDialog::getDifficulty() const
{
	return ui.difficultyBox->currentText();
}

QString IntroDialog::getUsername() const
{
	return ui.usernameLine->text();
}

IntroDialog::~IntroDialog()
{}
