#include "stdafx.h"
#include "Resource.h"

Resource::Resource()
{
	cout << "Resource�� �����Ǿ����ϴ�." << endl;
}

void Resource::Share(const shared_ptr<Resource>& reference)
{
	resource = reference;
}

Resource::~Resource()
{
	cout << "Resource�� �Ҹ�Ǿ����ϴ�." << endl;
}
