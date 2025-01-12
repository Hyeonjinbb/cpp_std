//2예외 처리 생략과 실패 대응
//try, catch 문으로 예외를 처리하고 생략된 예외와 실패에 대응하는 코드 작성

#include <iostream>
using namespace std;

void process(int value) {
	//value가 음수일 때 예외
	//예외가 발생하면 "예외 발생!"출력, 발생하지 않으면 value 출력
	try
	{
		cout << "정수를 입력하세요: ";
		cin >> value;

		if (value < 0)
		{
			cout << "예외 발생!" << endl;
			throw - 1;
		}
		cout << value;
	
	}
	catch (int a)
	{
		cout << "catch" << endl;
	}
	catch (...)
	{
		cout << "catch all" << endl;
	}
}

int main()
{
	process(10);
	process(-5);
	return 0;
}