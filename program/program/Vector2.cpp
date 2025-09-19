#include "stdafx.h"
#include "Vector2.h"

Vector2::Vector2(int x, int y)
{
	this->x = x;
	this->y = y;
}

Vector2 & Vector2::operator+(const Vector2& cline)
{
	Vector2 vector(x + cline.x, y + cline.y);
	return vector;
}


