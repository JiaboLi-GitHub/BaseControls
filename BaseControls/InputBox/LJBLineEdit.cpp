#include "LJBLineEdit.h"

LJBLineEdit::LJBLineEdit(QWidget* parent)
	: QLineEdit(parent)
{
	initUI();
}

LJBLineEdit::~LJBLineEdit()
{}

void LJBLineEdit::initUI()
{
	this->setPlaceholderText("请输入内容");
	this->setStyleSheet(R"(
		QLineEdit 
		{
			padding-left: 10px;
			padding-right: 10px;
			color: #737478;
			background-color: white;
			border-style: solid;
			border-width: 1px;
			border-radius: 5px;
			border-color: #dcdfe6;
		}
		QLineEdit:hover
		{
			border-color: #c0c4cc;
		}
		QLineEdit:focus
		{
			border-color: #409eff;
		}
	)");
}
