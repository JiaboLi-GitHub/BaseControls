#pragma once

#include <QPushButton>
#include "../SharedExport.h"

class MATERIAL_WIDGET_API DefaultButton : public QPushButton
{
	Q_OBJECT

public:
	DefaultButton(QWidget* parent = nullptr);
	~DefaultButton();

private:
	void initUI();
};
