#include <iostream>
using namespace std;

void swap(int &ref_a, int &ref_b) //�Ű������� ���۷��� ������ ����
{
	//��ȯ �� a, b ��
	cout << "[swap func] before swap, ref_a: " << ref_a << " ref_b: " << ref_b << endl;

	int temp = ref_a;
	ref_a = ref_b;
	ref_b = temp;

	//��ȯ �� a, b ��
	cout << "[swap func] after swap, ref_a: " << ref_a << " ref_b: " << ref_b << endl;
}

int main()
{
	int a = 5;
	int b = 10;

	//swap �Լ� ȣ�� �� a,b�� ��
	cout << "[main] before swap, a: " << a << " b: " << b << endl<< endl;

	swap(a, b);
	//swap �Լ� ȣ�� �� a,b�� ��
	cout<< endl<< "[main] after swap, a: " << a << " b: " << b << endl;

	return 0;
}