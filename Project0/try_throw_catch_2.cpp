#include <iostream>
using namespace std;

int main()
{
	try
	{
		int input;
		cout << "���� �� �ϳ��� �����ϼ���:";
		cin >> input;
		if (input > 0)
		{
			cout << "throw 1" << endl;
			throw 1;
			cout << "after throw 1" << endl;
		}
		if (input < 0)
		{
			cout << "throw -1.0f" << endl;
			throw - 1.0f;
			cout << "after throw -1.0f" << endl;
		}
		if (input == 0)
		{
			cout << "throw Z" << endl;
			throw 'Z';
			cout << "after throw Z" << endl;
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