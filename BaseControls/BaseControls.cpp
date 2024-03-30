#include "BaseControls.h"
#include "Button/LJBDefaultButton.h"
#include "InputBox/LJBLineEdit.h"


BaseControls::BaseControls(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	this->setStyleSheet(R"(

			background-color: white;
	)");

	//auto widget = new LJBDefaultButton(this);
	auto widget = new LJBLineEdit(this);

	widget->setFixedSize(200, 40);
	widget->move(width() / 2 - widget->width() / 2, height() / 2 - widget->height() / 2);
}

BaseControls::~BaseControls()
{}
