#include <iostream>
using namespace std;

int main()
{
	unsigned int value = 0x00000000; //0�� 16����(hex)�� ǥ���� �� //0x�� 16�������� ��Ÿ��

	value = ~value; //����
	cout << hex << value << endl;

	return 0;
}