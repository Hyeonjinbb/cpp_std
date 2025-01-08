//방문하는 손님 수만큼만 빵을 만들기
#include <iostream>
#include <string>

using namespace std;
int main()
{
	int customer_num = 0;

	cout << "오늘 방문 손님: ";
	cin >> customer_num; //손님 수 입력

	string* bread = new string[customer_num]; //손님 수만큼 string 배열 생성
	for (int i = 0; i < customer_num; i++) //입력받은 손님 수만큼 반복
	{
		bread[i] = "빵_" + to_string(i); //'빵_숫자' 형태로 배열에 저장
	}

	cout << endl << "--생산된 빵--" << endl;
	for (int i = 0; i < customer_num; i++)
	{
		cout << *(bread + i) << endl; //포인트 연산으로 접근-> bread는 배열 첫번째 원소 주소이고 포인트 활용해 배열의 각 원소 값에 접근 
	}
	delete[] bread;
	return 0;
}