#include "DefaultButton.h"

DefaultButton::DefaultButton(QWidget* parent)
	: QPushButton(parent)
{
	initUI();
}

DefaultButton::~DefaultButton()
{}

void DefaultButton::initUI()
{
	this->setText("成功按钮");
	this->setStyleSheet(R"(
		QPushButton 
		{
			color: #606266;
			background-color: white;
			border-style: solid;
			border-width: 1px;
			border-radius: 5px;
			border-color: #dcdfe6;
		}
		QPushButton:hover
		{
			color: #409eff;
			background-color: #ecf5ff;
			border-color: #c6e2ff;
		}
		QPushButton:pressed
		{
			border-color: #3a8ee6;
		}
	)");
}