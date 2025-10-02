#include "stdafx.h"
#include <unordered_set>
#include <unordered_map>

int main()
{
#pragma region 연관 컨테이너
	//특정한 방식으로 데이터를 저장하고 검색하는 컨테이너 입니다.
#pragma region unordered_set
	//unordered_set<const char*>unordered_set;

	//unordered_set.reserve(16);

	//unordered_set.max_load_factor(2.0);

	//unordered_set.insert("Doran's Blade");
	//unordered_set.insert("Ghost Dancer");
	//unordered_set.insert("The Fallen King's Sword");

	//unordered_set.insert("Morellomicon"); 
	//unordered_set.insert("Echoes of Luden");
	//unordered_set.insert("Infinity Edge");

	//unordered_set.insert("Trinity Force");
	//unordered_set.insert("Zhonya’s Hourglass");
	//unordered_set.insert("Wit’s End");

	//cout << "Load Factor : " << unordered_set.load_factor() << endl;
	//cout << "bucket Count: " << unordered_set.bucket_count() << endl;

	//if (unordered_set.find("Doran's Blade") != unordered_set.end())
	//{
	//	cout << "the data exists..." << endl;
	//}
	//else
	//{
	//	cout << "the deata does not exits..." << endl;
	//}
	//unordered_set.erase("Morellomicon");
	//for (const char * element : unordered_set)
	//{
	//	cout << element << endl;
	//}
#pragma endregion

#pragma region unordered_map
	//unordered_map<string, int> unorderd_map;

	//unorderd_map["pouion"] = 2;
	//unorderd_map["elixir"] = 1;
	//unorderd_map["Antidote"] = 2;
	//unorderd_map["Oil"] = 3;

	//
	//string item_name;
	//cin >> item_name;
	//if (unorderd_map[item_name] > 0 && unorderd_map.find(item_name) != unorderd_map.end())
	//{
	//	unorderd_map[item_name]--;
	//	cout << item_name << "use" << endl;
	//	if (unorderd_map[item_name] <= 0)
	//	{
	//		unorderd_map.erase(item_name);
	//		cout << item_name << "All items acquired." << endl;
	//	}
	//}
	//else
	//{
	//	cout << "Doesn't exist." << endl;
	//}
	//for (const auto& element : unorderd_map)
	//{
	//	cout << "Name : " << element.first << "Quantity : " << element.second << endl;
	//}
	
#pragma endregion

#pragma region set
	//
#pragma endregion


#pragma endregion


	return 0;
}
