#include <iostream>
using namespace std;

class character {
public:
	character() {
		cout << "character Ŭ���� ������" << endl;
	};
};


class monster {
public:
	monster() {
		cout << "monster Ŭ���� ������" << endl;
	};
};

//
class monster_a :public monster, character {
public:
	monster_a() {
		cout << "monster_a Ŭ���� ������" << endl;
	};

monster_a(int x, int y) :location{ x,y } {
	cout << "monster_a Ŭ���� ������ (�Ű����� �߰�)" << endl;
	};

void show_location() {
	cout << "��ġ(" << location[0] << " ," << location[1] << ")" << endl;
	};

private:
	int location[2];
};

int main() {
	monster_a forest_monster;
	forest_monster.show_location();
	monster_a wood_monster(10, 25);
	wood_monster.show_location();

	return 0;
}