#include <iostream>
using namespace std;

class character {
public:
	character() {
		cout << "character Ŭ���� ������" << endl;
	};
};


class player :public character {
public:
	player() {};
};


class monster {
public:
	monster() {
		cout << "monster Ŭ���� ������" << endl;
	};
};

class monster_b : public monster, character {
public:
	monster_b(player& attack_target)
		:monster_type("�Ϲ�"),
		location{ 0,0 },
		unique_id(++total_count),
		target(attack_target) {
		difficult_level = 10;
		quiz = new char[1024];
	};
	~monster_b() {
		delete[]quiz;
		total_count--;
	};

	void set_quiz(const char* new_quiz) { strcpy_s(quiz, 1024, new_quiz); };
	void set_type(string type) { monster_type = type; };
	void set_difficult_level(int level) { difficult_level = level; };
	void set_location(int x, int y) { location[0] = x; location[1] = y; };
	char* get_quiz() { return quiz; };
	string get_type() { return monster_type; };
	int get_difficult_level() { return difficult_level; };
	int get_x_location() { return location[0]; };
	int get_y_location() { return location[1]; };

private:
	string monster_type;
	int location[2];
	static int total_count;
	const int unique_id;
	player& target;
	int difficult_level;
	char* quiz;
};

int monster_b::total_count = 0;//���� ���� �ʱ�ȭ

//

int main() {
	player first_player;
	monster_b first_mon(first_player);
	first_mon.set_quiz("��ħ�� �� ��, ���ɿ��� �� ��, ���ῡ�� �� ���� ����?");
	first_mon.set_difficult_level(100);
	first_mon.set_type("�������� ����");
	first_mon.set_location(30, 30);

	monster_b second_mon = first_mon;
	second_mon.set_quiz("���� ���������� ������ �ɱ�?");
	second_mon.set_location(45, 50);
	
	cout << "[" << first_mon.get_x_location() << "," << first_mon.get_y_location() << "] ù��° ����(" << first_mon.get_type() << "-" << first_mon.get_difficult_level()
		<< "),�� ���� ��������:" << first_mon.get_quiz() << endl;
	cout << "[" << second_mon.get_x_location() << "," << second_mon.get_y_location() << "] �ι�° ����(" << second_mon.get_type() << "-" << second_mon.get_difficult_level()
		<< "),�� ���� ��������:" << second_mon.get_quiz() << endl;
	return 0;

}