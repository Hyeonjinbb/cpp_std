#include <iostream>
using namespace std;

class monster {
public:
	monster() {
		cout << "monster Ŭ���� ������" << endl;
	};
	~monster() {
		cout << "monster Ŭ���� �Ҹ���" << endl;
	};
};

class monster_a :public monster {
public:
	monster_a() {
		cout << "monster_a Ŭ���� ������" << endl;
	};
	~monster_a() { //�� �Ҹ��ڰ� ȣ����� ����
		cout << "monster_a Ŭ���� �Ҹ���" << endl;
	};
};

int main() {
	monster* forest_monster = new monster_a();
	delete forest_monster; //�޸� ����
	return 0;
}