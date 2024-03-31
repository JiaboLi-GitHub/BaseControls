#pragma once

#include <QLineEdit>
#include "../SharedExport.h"

class MATERIAL_WIDGET_API LJBLineEdit : public QLineEdit
{
	Q_OBJECT

public:
	LJBLineEdit(QWidget* parent = nullptr);
	~LJBLineEdit();

private:
	void initUI();
};
