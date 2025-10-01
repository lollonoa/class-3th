#include "../program/stdafx.h"
#include <stack>
#include <queue>
int main()
{
#pragma region 컨테이너 어댑터
	//기존 컨테이너의 인터페이스를 제한하여 만든 기능이
	//제한 되거나 변경된 컨테이너 입니다.

#pragma region stack container
	//stack<int>stack;
	//stack.push(10);
	//stack.push(20);
	//stack.push(30);
	//stack.push(40);
	//stack.push(50);
	//while (stack.empty() == false)
	//{
	//	cout << stack.top() << endl;

	//	stack.pop();
	//}
#pragma region for을 쓸 경우
//int n = stack.size(); 
////for문이 반복되면 pop으로 인해 크기가 연속적으로 줄어들어 반복문이 빨리 끝난다.
////기존 사이즈를 반복문 밖에 저장하여 반복문이 빨리 끝나는 것을 방지 해줘야 한다.
//for (int i = 0; i < n; i++)
//{
//	cout << "stack :" << stack.top() << endl;
//	stack.pop();
//}
#pragma endregion


#pragma endregion

#pragma region queue container

	//queue<int> queue;
	//queue.push(10);
	//queue.push(20);
	//queue.push(30);
	//queue.push(40);
	//queue.push(50);
	//const int & size  = queue.size();
	//for (int i = 0; i < size; i++)
	//{
	//	cout << "queue : " << queue.front() << endl;
	//	queue.pop();
	//}

#pragma endregion

#pragma region prioritu queue container
	/*priority_queue<int> priority_queue;

	priority_queue.push(10);
	priority_queue.push(20);
	priority_queue.push(9);
	priority_queue.push(15);
	priority_queue.push(78);

	while (priority_queue.empty() == false)
	{
		cout << priority_queue.top() << endl;

		priority_queue.pop();
	}*/
#pragma endregion


#pragma endregion


	return 0;
}
