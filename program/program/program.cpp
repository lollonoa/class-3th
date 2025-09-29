#include "stdafx.h"
#include <vector>
#include <list>
int main()
{
#pragma region 선형 컨테이너
	// 데이터를 선형으로 저장하며, 특별한 제약이나 규칙이 없는 컨테이너 입니다.

#pragma region vector container
	//vector<int> vector;

	//vector.reserve(8);
	//vector.push_back(10);
	//vector.push_back(20);
	//vector.push_back(30);
	//vector.push_back(40);
	//vector.push_back(50);

	//vector.pop_back();

	//for (int i = 0; i < vector.size(); i++)
	//{	
	//	cout << vector[i] << endl;
	//}

	//vector.clear();
	//cout << "vector의 size값 : " << vector.size() << endl;
	//cout << "vector의 cpacity값 : "  << vector.capacity() << endl;
#pragma endregion

#pragma region list container
	list<int> list;

	list.push_back(20);
	list.push_back(30);

	list.push_front(10);

	list.pop_front();

	list.push_front(1);

	list.remove(20);

	//범위기반 for문, 읽기 전용이면 const를 붙이는게 좋다
	for (const int i : list)
	{
		cout << i << " ";
	}
#pragma endregion

#pragma endregion


	return 0;
}
