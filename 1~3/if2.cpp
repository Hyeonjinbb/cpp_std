#include <iostream>
using namespace std;

int main()
{
	int a = 7;
	int b = 5;
	int result;

	result = a > b ? a : b;  // a:b  =  true일때 a, false일때 b를 result에 저장
	cout << "result=" << result << endl;

	return 0;
}