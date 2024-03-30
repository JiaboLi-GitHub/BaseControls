#include "RegisterMetaType.h"
#include "Button/LJBDefaultButton.h"
#include "InputBox/LJBLineEdit.h"

QList<int> registerMetaType()
{
	QList<int> idList;
	idList.append(qRegisterMetaType<LJBDefaultButton>("DefaultButton"));
	idList.append(qRegisterMetaType<LJBLineEdit>("LJBLineEdit"));
	return idList;
}