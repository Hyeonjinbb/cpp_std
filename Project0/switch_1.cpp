#include <iostream>
using namespace std;

int main()
{
	int input_number;
	cout << "1~5 ���� �Է�: ";
	cin >> input_number;
	switch (input_number)
	{
	case 1:
		cout << "�Է��� ���� 1 �Դϴ�." << endl;
		break;
	case 2:
		cout << "�Է��� ���� 2 �Դϴ�." << endl;
		break;
	case 3:
		cout << "�Է��� ���� 3 �Դϴ�." << endl;
		break;
	case 4:
		cout << "�Է��� ���� 4 �Դϴ�." << endl;
		break;
	case 5:
		cout << "�Է��� ���� 5 �Դϴ�." << endl;
		break;
	default:
		cout << "�Է��� ���� 1~5 ���� ���Դϴ�." << endl;
		break;
	}
	return 0;
}
//break�� ���ٸ� ��� ������ ���ʷ� �����