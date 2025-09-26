#include "stdafx.h"
#include "Resource.h"

Resource::Resource()
{
	cout << "Resource이 생성되었습니다." << endl;
}

void Resource::Share(const shared_ptr<Resource>& reference)
{
	resource = reference;
}

Resource::~Resource()
{
	cout << "Resource이 소멸되었습니다." << endl;
}
