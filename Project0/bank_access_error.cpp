#include <iostream>
using namespace std;

class bank {	
private:
	int safe; //�ݰ�
public:
	bank(); //�⺻ ������
	void use_counter(int _in, int _out); //����� â�� �Լ�

};

bank::bank() {
	safe = 1000; //���� �ݰ� �ʱ� �ݾ� ����
	cout << "���� �ݰ�:" << safe << endl;
	cout << endl;
}

void bank::use_counter(int _in, int _out) {
	safe += _in; //�Ա�
	safe -= _out; //���

	cout << "�Ա�" << _in << endl;
	cout << "���" << _out << endl;
	cout << "�ݰ�" << safe << endl;
	cout << endl;
}
int main() {
	bank my_bank;
	my_bank.safe -= 100; //private���� ������ �ݰ� ���� ������ ���� �õ�
	return 0;
}