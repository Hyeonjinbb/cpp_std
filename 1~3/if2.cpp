#include <iostream>
using namespace std;

int main()
{
	int a = 7;
	int b = 5;
	int result;

	result = a > b ? a : b;  // a:b  =  true�϶� a, false�϶� b�� result�� ����
	cout << "result=" << result << endl;

	return 0;
}