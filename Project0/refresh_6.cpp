//4 예외처리 실전연습
//사용자에게 월과 일을 입력받아 해당하는 날짜의 계절을 출력하는 프로그램을 만들어 보세요
//3~5월까지는 봄, 6~8월 까지는 여름, 9~11월까지는 가을, 12~2월까지 겨울
//월과 일을 입력받을 때 범위를 벗어나는 경우 std::out_of_range 예외 발생

//출력 예시
//월을 입력하세요:3
//일을 입력하세요:20
//입력하신 날짜의 계절은 봄입니다.

#include <iostream>
using namespace std;

int main()
{
	try 
	{
		int month;
		int day;
		cout << "월을 입력하세요: ";
		cin >> month;
		cout << " 일을 입력하세요: ";
		cin >> day;
		if (month >= 3 && month <= 5)
		{
			cout << "봄";
		}
		if (month >= 6&& month <= 8)
		{
			cout << "여름";
		}
		if ( month >= 9&& month <= 11)
		{
			cout << "가을";
		}
		if ( month == 12||  month == 1|| month == 2)
		{
			cout << "겨울";
		}
		if (month==0 || month >12)
		{
			cout << "out_of_range" << endl;
			throw 1;
		}
	}
	catch (int a)
	{
		cout << "catch" << endl;
	}
	catch (...)
	{
		cout << "catch all" << endl;
	}
	return 0;
}