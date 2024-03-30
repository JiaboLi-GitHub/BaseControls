#pragma once

#include <QPushButton>
#include "../SharedExport.h"

class MATERIAL_WIDGET_API LJBDefaultButton : public QPushButton
{
	Q_OBJECT

public:
	LJBDefaultButton(QWidget* parent = nullptr);
	~LJBDefaultButton();

private:
	void initUI();
};
