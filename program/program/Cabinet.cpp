#include "stdafx.h"
#include "Cabinet.h"

Cabinet::Cabinet()
{
	cout << "캐비닛이 생성되었습니다." << endl;
}

void Cabinet::Interact()
{
	cout << "캐비닛을 열었습니다." << endl;
}

Cabinet::~Cabinet()
{
	cout << "캐비닛을 파괴하였습니다." << endl;
}
