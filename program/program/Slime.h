#pragma once
#include "Monster.h"
class Slime : public Monster
{
public:
	Slime();
	virtual void Describe()override;
	//override �� ������ġ�� �ڽ�Ŭ������ �Լ��� ������ ���ִ� �Լ� �̴�.
	virtual ~Slime() override;
};

