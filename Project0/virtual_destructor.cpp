#include <iostream>
using namespace std;

class monster {
public:
	monster() {
		cout << "monster Ŭ���� ������" << endl;
	};
	virtual ~monster() {
		cout << "monster Ŭ���� �Ҹ���" << endl;
	};
};

class monster_a :public monster {
public:
	monster_a() {
		cout << "monster_a Ŭ���� ������" << endl;
	};
	virtual ~monster_a() { //�θ� ��ü�� �Ҹ��� �� �ڽ� ��ü�� �Ҹ��ڵ� ȣ���
		cout << "monster_a Ŭ���� �Ҹ���" << endl;
	};
};

int main() {
	monster* forest_monster = new monster_a();
	delete forest_monster; //�޸� ����
	return 0;
}