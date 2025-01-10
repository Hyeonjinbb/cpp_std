#include <iostream>
using namespace std;

void swap(int a, int b)
{
	cout << "[swap func] before swap, a: " << a << " b: " << b << endl;

	int temp = a;
	a = b;
	b = temp;

	//swap 함수 내 교환 후 a, b의 값
	cout << "[swap func] after swap, a: " << a << " b: " << b << endl;
}

int main()
{
	int a = 5;
	int b = 10;

	//swap 호출 전 a,b의 값
	cout << "[main] before swap, a: " << a << " b: " << b<< endl << endl;
	swap(a, b);
	//swap 함수 호출 후 a, b 값
	cout << endl << "[main] after swap,a: " << a << " b: " << b<< endl;

	return 0;
}