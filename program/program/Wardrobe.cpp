#include "stdafx.h"
#include "Wardrobe.h"

Wardrobe::Wardrobe()
{
	cout << "옷장이 생성되었습니다." << endl;
}

void Wardrobe::Interact()
{
	cout << "옷장을 열었습니다." << endl;
}

Wardrobe::~Wardrobe()

{
	cout << "옷장이 파괴되었습니다." << endl;
}
