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
	cout << "몸이 돌로 이루어 져 있다, 서식지 마다 특징이 다르다.\n" << endl;
}

Golem::~Golem()
{
	cout << "Destroy Golem" << endl;
}
