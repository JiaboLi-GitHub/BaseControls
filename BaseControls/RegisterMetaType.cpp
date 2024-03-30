#include "RegisterMetaType.h"
#include "Button/DefaultButton.h"
#include "InputBox/LJBLineEdit.h"

QList<int> registerMetaType()
{
	QList<int> idList;
	idList.append(qRegisterMetaType<DefaultButton>("DefaultButton"));
	idList.append(qRegisterMetaType<LJBLineEdit>("LJBLineEdit"));
	return idList;
}
