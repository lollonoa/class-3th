#pragma once
class Vector2
{
private:
	int x;
	int y;
public:
	Vector2(int x, int y);

	const int& X();
	const int& Y();

	const Vector2 & operator + (const Vector2 & cline);
	const Vector2& operator - (const Vector2 & cline);
	const Vector2& operator * (const Vector2 & cline);
	const Vector2& operator / (const Vector2 & cline);

	//단항연산자 전위
	const Vector2& operator ++ ();
	const Vector2& operator -- ();

	//단항연산자 후위 는 (int) 를 넣어줘야 한다.
	const Vector2& operator ++ (int);
	const Vector2& operator -- (int);

};

