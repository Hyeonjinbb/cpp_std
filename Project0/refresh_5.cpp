//3 assert�� �̿��� ���� ó�� ����
#include <iostream>
#include <cassert>
using namespace std;

void divide(int a, int b)
{
	//b�� 0�϶� assert�� ���� ó��
	assert(b != 0);
	cout << "a: " << a <<endl;
	cout << "b: " << b <<endl;
}

int main()
{
	divide(10, 2);
	divide(5, 0);
	return 0;
}