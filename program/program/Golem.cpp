#include "Golem.h"
#include "stdafx.h"

Golem::Golem()
{	
	name = "[Golem]";
	health = 250;
	attack = 10;
	defense = 5;
}
void Golem::Describe()
{
	cout << "���� ���� �̷�� �� �ִ�, ������ ���� Ư¡�� �ٸ���.\n" << endl;
}

Golem::~Golem()
{
	cout << "Destroy Golem" << endl;
}
