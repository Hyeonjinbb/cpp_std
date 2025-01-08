#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	int a = 13;
	int b = a >> 1; //1bite 오른쪽으로 시프트
	int c = a << 1; //1bite 왼쪽으로 시프트
	int d = a >> -1; //오류 
	//int e = a << 32; //오류
	//이동하는 비트 수가 음수거나 너무 크면 제대로 수행되지 않음
	cout << "a=" << bitset<8>(a) << ":" << a << endl;
	cout << "b=" << bitset<8>(b) << ":" << b << endl;
	cout << "c=" << bitset<8>(c) << ":" << c << endl;
	cout << "d=" << bitset<8>(d) << ":" << d << endl;
	cout << "e=" << bitset<8>(e) << ":" << e << endl;
	return 0;

}