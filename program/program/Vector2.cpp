#include "stdafx.h"
#include "Vector2.h"

Vector2::Vector2(int x, int y)
{
	this->x = x;
	this->y = y;
}

const int& Vector2::X()
{
	return x;
}

const int& Vector2::Y()
{
	return y;
}

const Vector2 & Vector2::operator+(const Vector2& cline)
{
	Vector2 vector(x + cline.x, y + cline.y);
	return vector;
}

const Vector2& Vector2::operator-(const Vector2& cline)
{
	Vector2 vector(x - cline.x, y - cline.y);
	return vector;
}

const Vector2& Vector2::operator*(const Vector2& cline)
{
	Vector2 vector(x * cline.x, y * cline.y);
	return vector;
}

const Vector2& Vector2::operator/(const Vector2& cline)
{
	Vector2 vector(x / cline.x, y / cline.y);
	return vector;
}

const Vector2& Vector2::operator++()
{
	++x;
	++y;
	return *this;
}

const Vector2& Vector2::operator--()
{
	--x;
	--y;
	return *this;
}

const Vector2& Vector2::operator++(int)
{
	Vector2 clone(x, y);
	this->x++;
	this->y++;
	return clone;
}

const Vector2& Vector2::operator--(int)
{
	Vector2 clone(x, y);
	this->x--;
	this->y--;
	return clone;
}