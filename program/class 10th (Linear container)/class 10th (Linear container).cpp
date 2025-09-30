#include "../program/stdafx.h"
#include <vector>
#include <list>
#include <deque>
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
	//list<int> list;

	//list.push_back(20);
	//list.push_back(30);

	//list.push_front(10);

	//list.pop_front(); 배열 맨 앞을 제외 

	//list.push_front(1); 배열 맨 앞에 샆입

	//list.remove(20);

	////범위기반 for문, 읽기 전용이면 const를 붙이는게 좋다
	//for (const int & i : list)
	//{
	//	cout << i << endl;
	//}

	//list.assign(3, 5);
	//cout << "List Size : " << list.size() << endl;
#pragma endregion

#pragma region deque container

	//int index = 0;
	//deque<int> deque;
	//deque.push_back(10);
	//deque.push_back(20);
	//deque.push_back(30);

	//deque.push_front(5);
	//deque.push_front(1);

	//deque.push_back(40);
	//deque.push_back(50);

	//deque.pop_front();
	//deque.pop_back();
	////for (int i=0; i < deque.size(); i++)
	////{	
	////	//cout << deque[i] << endl;  예외처리를 계산 안하고 다이렉트로 들어가 속도가 빠름
	////	cout << deque.at(i) << endl; 예외처리를 검사하기 때문에 안전하지만 느림
	////}
	//cout << "index : ";

	//cin >> index;

	//cout << deque.at(index) << endl;

#pragma endregion


#pragma endregion


	return 0;
}

