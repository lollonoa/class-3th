#pragma once
class Character
{
private:
	weak_ptr<Character>character;

public:
	Character();

	void Paryner(const weak_ptr<Character> & reference);

	~Character();

};

