//2���� ó�� ������ ���� ����
//try, catch ������ ���ܸ� ó���ϰ� ������ ���ܿ� ���п� �����ϴ� �ڵ� �ۼ�

#include <iostream>
using namespace std;

void process(int value) {
	//value�� ������ �� ����
	//���ܰ� �߻��ϸ� "���� �߻�!"���, �߻����� ������ value ���
	try
	{
		cout << "������ �Է��ϼ���: ";
		cin >> value;

		if (value < 0)
		{
			cout << "���� �߻�!" << endl;
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