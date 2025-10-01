#include "stdafx.h"
#include <unordered_set>


int main()
{
#pragma region 연관 컨테이너
	//특정한 방식으로 데이터를 저장하고 검색하는 컨테이너 입니다.
	unordered_set<const char*>unordered_set;

	unordered_set.reserve(16);

	unordered_set.max_load_factor(2.0);

	unordered_set.insert("Doran's Blade");
	unordered_set.insert("Ghost Dancer");
	unordered_set.insert("The Fallen King's Sword");

	unordered_set.insert("Morellomicon"); 
	unordered_set.insert("Echoes of Luden");
	unordered_set.insert("Infinity Edge");

	unordered_set.insert("Trinity Force");
	unordered_set.insert("Zhonya’s Hourglass");
	unordered_set.insert("Wit’s End");

	cout << "Load Factor : " << unordered_set.load_factor() << endl;
	cout << "bucket Count: " << unordered_set.bucket_count() << endl;
#pragma endregion


	return 0;
}
