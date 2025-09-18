#pragma once
#include "Monster.h"
class Slime : public Monster
{
public:
	Slime();
	virtual void Describe()override;
	//override 는 안전장치로 자식클래스의 함수를 재정의 해주는 함수 이다.
	virtual ~Slime() override;
};

