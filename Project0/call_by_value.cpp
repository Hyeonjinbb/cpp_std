#include <iostream>
using namespace std;

void swap(int a, int b)
{
	cout << "[swap func] before swap, a: " << a << " b: " << b << endl;

	int temp = a;
	a = b;
	b = temp;

	//swap �Լ� �� ��ȯ �� a, b�� ��
	cout << "[swap func] after swap, a: " << a << " b: " << b << endl;
}

int main()
{
	int a = 5;
	int b = 10;

	//swap ȣ�� �� a,b�� ��
	cout << "[main] before swap, a: " << a << " b: " << b<< endl << endl;
	swap(a, b);
	//swap �Լ� ȣ�� �� a, b ��
	cout << endl << "[main] after swap,a: " << a << " b: " << b<< endl;

	return 0;
}