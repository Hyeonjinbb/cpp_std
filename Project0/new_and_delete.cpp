#include <iostream>
using namespace std;

int main()
{
	int* pt_int_value = new int; //동적 메모리 할당
	*pt_int_value = 100; 
	cout << *pt_int_value << endl;
	//정수를 저장할 메모리 주소를 할당하고, 해당 메모리 주소 시작 주소 지점을 100으로 설정함

	delete pt_int_value; //동적 메모리 해제


	//배열 형태의 동적 메모리 할당과 해제
	int* pt_int_array_value = new int[5]; //배열 형식의 동적 메모리 할당

	for (int i = 0; i < 5; i++)
	{
		pt_int_array_value[i] = i;

	}

	for (int i = 0; i < 5; i++)
	{
		cout << pt_int_array_value[i] << endl;
	}
	delete[] pt_int_array_value;

	return 0;
}