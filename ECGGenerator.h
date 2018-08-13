#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ECGGenerator.h"

class ECGGenerator : public QMainWindow
{
	Q_OBJECT

public:
	ECGGenerator(QWidget *parent = Q_NULLPTR);

private:
	Ui::ECGGeneratorClass ui;
};
