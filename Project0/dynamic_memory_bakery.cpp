//�湮�ϴ� �մ� ����ŭ�� ���� �����
#include <iostream>
#include <string>

using namespace std;
int main()
{
	int customer_num = 0;

	cout << "���� �湮 �մ�: ";
	cin >> customer_num; //�մ� �� �Է�

	string* bread = new string[customer_num]; //�մ� ����ŭ string �迭 ����
	for (int i = 0; i < customer_num; i++) //�Է¹��� �մ� ����ŭ �ݺ�
	{
		bread[i] = "��_" + to_string(i); //'��_����' ���·� �迭�� ����
	}

	cout << endl << "--����� ��--" << endl;
	for (int i = 0; i < customer_num; i++)
	{
		cout << *(bread + i) << endl; //����Ʈ �������� ����-> bread�� �迭 ù��° ���� �ּ��̰� ����Ʈ Ȱ���� �迭�� �� ���� ���� ���� 
	}
	delete[] bread;
	return 0;
}