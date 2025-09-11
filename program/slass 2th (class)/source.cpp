#include <iostream>

using namespace std;

namespace Colombia
{
	float area = 45789.2f;
	void size()
	{
		cout << "area : " << area << "km" << endl;
	}
}

namespace Brazil
{
	float area = 57861.5f;

	void size()
	{
		cout << "area : " << area << "km" << endl;
	}
}

using namespace Brazil;

//클래스
class GameObject
{
#pragma region 접근 지정자
	//class내부에 포함되어 있는 속석에 접근 범위를
	//제한하는 지정자 입니다.

	//public:클래스 내부와 자기가 상속하고 있는 클래스 그리고
	//		외부에서도 접근을 허용하는 지정자 입니다.

	//pritected: 클래스 내부와 자기가 상속하고 있는 클래스 까지만
	//			접근을 허용하는 지정자입니다.

	//private : 클래스 내부까지만 접근을 허용하는 지정자 입니다.
	//			* 이무것도 지정안하면 private 가 디폴트로 적용된다.

#pragma endregion

	int x = 1;
	int y = 1;
	int z = 1;
protected:
	const char* name;
public:
	void Position()
	{
		cout << "x : " << x << endl;
		cout << "y : " << y << endl;
		cout << "z : " << z << endl;
	}
};

//기본매개변수
void profile(const char* name = "James", int age)
{
	cout << "Name : " << name << endl;
	cout << "age : " << age << endl;
}

int main()
{
#pragma region 이름 공간
	// 속성을 구분할 수 있도록 유효 범위를
	// 설정하는 영역입니다.

	//size();
	//Colombia::size();

#pragma endregion

#pragma region 클래스
	// 사용자 정의 데이터 유형으로 속성과 함수가 포함되어 
	// 있으며, 클래스를 통해 객체를 생성하여 접근하고 사용
	// 하는 집합체 입니다.

	//GameObject GameObject;

	//GameObject.Position();

	//cout << "game Object의 크기 : " << sizeof(GameObject) << endl;

	// 클래스의 경우 클래스 내부에 있는 변수는 클래스의
	// 메모리영역에 포함되지만, 정적 변수와 함수의 메모리는
	// 클래스 영역에 포함되지 않습니다.
#pragma endregion

#pragma region 기본 매개 변수
	//함수의 매개 변수에 값이 전달되지 않을 때
	//미리 값을 설정해놓는 매개 변수입니다.

	//profile();
	//profile("john", 24);

	//기본 매개 변수를 지정하려면 오른쪽에서 부터
	// 값을 지정해주어야 합니다.
#pragma endregion

	return 0;
}

