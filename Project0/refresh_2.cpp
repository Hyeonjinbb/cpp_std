#include <iostream>
using namespace std;

//2 ����ü Ȱ��
//5���� �Ӽ��� ���� ���Ͷ�� ����ü�� �����. 
//�ش� ����ü ������ ������ ���ڷ� �޾� ����ϴ� �Լ�
//�� �����ϴ��� main �Լ����� �׽�Ʈ�ϱ�

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