#include "Slime.h"
#include <iostream>

using namespace std;
Slime::Slime()
{
	name = "[Slime]";
	health = 50;
	attack = 1;
	defense = 1;

}
void Slime::Describe()
{
	cout << "유독성이 없어 아이들 촉감 놀이용으로 많이 사냥 당한다\n" << endl;
}
