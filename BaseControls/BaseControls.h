#pragma once

#include <QtWidgets/QWidget>
#include "ui_BaseControls.h"

class BaseControls : public QWidget
{
	Q_OBJECT

public:
	BaseControls(QWidget* parent = nullptr);
	~BaseControls();

private:
	Ui::BaseControlsClass ui;
};
