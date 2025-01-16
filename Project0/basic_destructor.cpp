#include <iostream>
using namespace std;

class charactor {
public:
	charactor() {
		cout << "charactor 클래스 생성자" << endl;
	};
	~charactor() { //소멸자 정의
		cout << "charactor 클래스 소멸자" << endl;
	}
};

class monster {
public:
	monster() {
		cout << "monster 클래스 생성자" << endl;

	};
	~monster() {
		cout << "monster 클래스 소멸자" << endl;
	};
};

class monster_a :public monster, charactor {
public:
	monster_a() {
		cout << "monster_a 클래스 생성자" << endl;
	};
	~monster_a() { //소멸자 정의
		cout << "monster_a 클래스 소멸자" << endl;
	}

};

int main() {
	monster_a forest_monster;
	return 0;
}