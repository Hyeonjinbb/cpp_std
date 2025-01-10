#include <iostream>
using namespace std;

int main()
{
	int input_number;

	cout << "정수 입력: ";
	cin >> input_number;

	if (input_number > 0)
	{
		cout << "입력한 수는 양수입니다" << endl;
	}
	else if (input_number < 0)
	{
		cout << "입력한 수는 음수입니다" << endl;
	}
	else
	{
		cout << "입력한 수는 0입니다" << endl;
	}
	return 0;
}