//���� Ŭ���� �����ϱ�~!!
#include <iostream>
using namespace std;

class character {
public:
	character() : hp(100), power(100) {};

protected:
	int hp;
	int power;
};

//�÷��̾� Ŭ����
class player :public character {
public:
	player() {};
};

//�⺻ ���� Ŭ���� 
class monster {
public:
	monster() {};
	void get_damage(int _damage) {};
	void attack(player target_player) {};
	void attack_special(player target_player);
};

void monster::attack_special(player target_player) {
	cout << "�⺻ ����:������-10 hp" << endl;
}

//�⺻ ���� Ŭ���� ��� a
class monster_a :public monster, character {
public:
	//��ӹ��� �Լ� �������̵�
	void attack_special(player target_player);
};

void monster_a::attack_special(player target_player) {
	cout << "���ޱ� ����: ������ -15 hp" << endl;
}

//�⺻ ���� Ŭ���� ��� b
class monster_b :public monster, character {
public:
	//��ӹ��� �Լ� �������̵�
	void attack_special(player target_player);
};

void monster_b::attack_special(player target_player) {
	cout << "���� ����: ������ -0 hp" << endl;
}

//�⺻ ���� Ŭ���� ��� c
class monster_c :public monster, character {
public:
	//��ӹ��� �Լ� �������̵�
	void attack_special(player target_player);
};

void monster_c::attack_special(player target_player) {
	cout << "���� ���� ����: ������ -100 hp" << endl;
}

int main()
{
	player player_1;

	monster_a forest_monster;
	monster_b tutorial_monster;
	monster_c boss_monster;

	cout << "���� �� ����" << endl;
	forest_monster.attack_special(player_1);
	tutorial_monster.attack_special(player_1);
	boss_monster.attack_special(player_1);
	return 0;
}