#include <iostream>
using namespace std;

class bank {
private:
	int safe; //�ݰ�
	string bank_name;
public:
	bank(string name) :bank_name(name) { safe = 0; }; //�⺻ ������
	~bank() {};
	void use_counter(int _in, int _out);//����� â�� �Լ�
};

void bank::use_counter(int _in, int _out) {
	safe += _in;
	safe -= _out;
	cout << bank_name << "ó�� - �Ա�: " << _in << ", ���: " << _out << endl;
}

	int main() {
	bank rich_bank("������ ����"), global_bank("������ ����");
	rich_bank.use_counter(10, 10);
	global_bank.use_counter(20, 5);
	return 0;
}