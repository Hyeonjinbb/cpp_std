#include <iostream>
using namespace std;

class monster {
public:
	monster() {
		cout << "monster 클래스 생성자" << endl;
	};
	virtual ~monster() {
		cout << "monster 클래스 소멸자" << endl;
	};
};

class monster_a :public monster {
public:
	monster_a() {
		cout << "monster_a 클래스 생성자" << endl;
	};
	virtual ~monster_a() { //부모 객체가 소멸할 때 자식 객체의 소멸자도 호출됨
		cout << "monster_a 클래스 소멸자" << endl;
	};
};

int main() {
	monster* forest_monster = new monster_a();
	delete forest_monster; //메모리 해제
	return 0;
}