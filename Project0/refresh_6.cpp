//4 ����ó�� ��������
//����ڿ��� ���� ���� �Է¹޾� �ش��ϴ� ��¥�� ������ ����ϴ� ���α׷��� ����� ������
//3~5�������� ��, 6~8�� ������ ����, 9~11�������� ����, 12~2������ �ܿ�
//���� ���� �Է¹��� �� ������ ����� ��� std::out_of_range ���� �߻�

//��� ����
//���� �Է��ϼ���:3
//���� �Է��ϼ���:20
//�Է��Ͻ� ��¥�� ������ ���Դϴ�.

#include <iostream>
using namespace std;

int main()
{
	try 
	{
		int month;
		int day;
		cout << "���� �Է��ϼ���: ";
		cin >> month;
		cout << " ���� �Է��ϼ���: ";
		cin >> day;
		if (month >= 3 && month <= 5)
		{
			cout << "��";
		}
		if (month >= 6&& month <= 8)
		{
			cout << "����";
		}
		if ( month >= 9&& month <= 11)
		{
			cout << "����";
		}
		if ( month == 12||  month == 1|| month == 2)
		{
			cout << "�ܿ�";
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