#include "Skeleton.h"
#include <iostream>

using namespace std;
Skeleton::Skeleton()
{	
	name = "[Skeleton]";
	health = 100;
	attack = 5;
	defense = 1;
}
void Skeleton::Describe()
{
	cout << "칼슘이 풍부하여 반려동물 간식용으로 많이 수출된다\n" << endl;
}