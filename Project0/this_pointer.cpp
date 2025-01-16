#include <iostream>
using namespace std;

class bank {
private:
	int safe; //�ݰ�
	string bank_name;
public:
	bank(string name) :bank_name(name) { safe = 0; }; //�⺻ ������
	~bank() {};
	void use_counter(int _in, int _out); //����� â�� �Լ�
	void transfer_account(int safe);     //���� ���� �Լ�
	void reset_account();                //���� �ʱ�ȭ
	int get_safe() { return safe; };     //�ݰ� �ݾ� ��ȯ
};

void bank::use_counter(int _in, int _out) {
	safe += _in;
	safe -= _out;
	cout << bank_name << "ó�� - �Ա�: " << _in << ", ���: " << _out << endl;
}

void bank::transfer_account(int safe) {
	this-> safe = safe;
	cout << bank_name << "�� ���� �̵�:" << safe << endl;
}	

void bank::reset_account() {
	this->safe = 0;
	cout << bank_name << "���°� �ʱ�ȭ�Ǿ����ϴ�." << endl;
}

int main() {
	bank rich_bank("������ ����"), global_bank("������ ����");
	rich_bank.use_counter(50, 10);

	global_bank.transfer_account(rich_bank.get_safe());
	rich_bank.reset_account();

	return 0;
}