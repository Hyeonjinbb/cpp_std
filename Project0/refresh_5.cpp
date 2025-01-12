//3 assert를 이용해 예외 처리 구현
#include <iostream>
#include <cassert>
using namespace std;

void divide(int a, int b)
{
	//b가 0일때 assert로 예외 처리
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