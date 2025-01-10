#include <iostream>
using namespace std;

//2 구조체 활용
//5가지 속성을 가진 몬스터라는 구조체를 만들기. 
//해당 구조체 형식의 변수를 인자로 받아 출력하는 함수
//잘 동작하는지 main 함수에서 테스트하기

struct Monster
{
	std::string name;
	std::string hair;
	int style;
	float height;
	float weight;
};


void style_(Monster* k, int _count)
{
	for (int i = 0; i < _count; i++)
	{
		if (k[i].style >= 2)
		{
			cout << "name: " << k[i].name << endl;
			cout << "hair: " << k[i].hair << endl;
			cout << "style: " << k[i].style << endl;
			cout << "height: " << k[i].height << endl;
			cout << "weight: " << k[i].weight << endl;
		}
	}
}

int main()
{
	Monster k[3] =
	{
	{ "kitty","green",1,40,20 },
	{ "pompom","yellow",2,130,60 },
	{ "dook","red",3,150,120 }
	};

	style_(k, 3);
	
	return 0;
}