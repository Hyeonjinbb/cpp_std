#include <iostream>
using namespace std;

class charactor {
public:
	charactor() {
		cout << "charactor Ŭ���� ������" << endl;
	};
	~charactor() { //�Ҹ��� ����
		cout << "charactor Ŭ���� �Ҹ���" << endl;
	}
};

class monster {
public:
	monster() {
		cout << "monster Ŭ���� ������" << endl;

	};
	~monster() {
		cout << "monster Ŭ���� �Ҹ���" << endl;
	};
};

class monster_a :public monster, charactor {
public:
	monster_a() {
		cout << "monster_a Ŭ���� ������" << endl;
	};
	~monster_a() { //�Ҹ��� ����
		cout << "monster_a Ŭ���� �Ҹ���" << endl;
	}

};

int main() {
	monster_a forest_monster;
	return 0;
}