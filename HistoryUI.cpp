#include "HistoryUI.h"

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
