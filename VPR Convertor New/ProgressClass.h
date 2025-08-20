#pragma once

#include <QMainWindow>
#include "ui_ProgressClass.h"

class ProgressClass : public QMainWindow
{
	Q_OBJECT

public:
	ProgressClass(QWidget *parent = nullptr);
	~ProgressClass();

	void setMaximumBar(int any);
	void clearBar();
	QProgressBar* getBarPtr();

private:
	Ui::ProgressClassClass ui;
};


