#include <iostream>
using namespace std;

int main()
{
	unsigned int value = 0x00000000; //0을 16진수(hex)로 표현한 값 //0x는 16진수임을 나타냄

	value = ~value; //반전
	cout << hex << value << endl;

	return 0;
}