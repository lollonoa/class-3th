#include "Skeleton.h"
#include <iostream>

using namespace std;
Skeleton::Skeleton()
{	
	name = "[Skeleton]";
	health = 100;
	attack = 5;
	defense = 1;
}
void Skeleton::Describe()
{
	cout << "Į���� ǳ���Ͽ� �ݷ����� ���Ŀ����� ���� ����ȴ�\n" << endl;
}