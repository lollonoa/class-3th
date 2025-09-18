#pragma once
class Monster
{	
protected:
	const char* name;
	int health;
	int attack;
	int defense;

public:
	void Stat();
	virtual void Describe();
	virtual ~Monster();
};

