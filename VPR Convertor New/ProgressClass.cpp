#include "ProgressClass.h"

ProgressClass::ProgressClass(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.progressBar->show();
	ui.progressBar->setValue(0);
}

ProgressClass::~ProgressClass()
{}

void ProgressClass::setMaximumBar(int any)
{
	ui.progressBar->setRange(0, any);
}

void ProgressClass::clearBar()
{
	ui.progressBar->reset();
}

QProgressBar* ProgressClass::getBarPtr()
{
	return ui.progressBar;
}

QStatusBar* ProgressClass::getStatusBarPtr()
{
	return ui.statusBar;
}