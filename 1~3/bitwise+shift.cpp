#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	int a = 13;
	int b = a >> 1; //1bite ���������� ����Ʈ
	int c = a << 1; //1bite �������� ����Ʈ
	int d = a >> -1; //���� 
	//int e = a << 32; //����
	//�̵��ϴ� ��Ʈ ���� �����ų� �ʹ� ũ�� ����� ������� ����
	cout << "a=" << bitset<8>(a) << ":" << a << endl;
	cout << "b=" << bitset<8>(b) << ":" << b << endl;
	cout << "c=" << bitset<8>(c) << ":" << c << endl;
	cout << "d=" << bitset<8>(d) << ":" << d << endl;
	cout << "e=" << bitset<8>(e) << ":" << e << endl;
	return 0;

}