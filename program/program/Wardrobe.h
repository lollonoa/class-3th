#pragma once
#include "Furniture.h"
class Wardrobe : public Furniture
{
public:
	Wardrobe();
	virtual void Interact() override;
	~Wardrobe();
};

