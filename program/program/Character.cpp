#include "stdafx.h"
#include "Character.h"

Character::Character()
{
	cout << "Created Character" << endl;
}

void Character::Paryner(const weak_ptr<Character> & reference)
{
	character = reference;
}

Character::~Character()
{
	cout << "Destroy Character" << endl;
}
