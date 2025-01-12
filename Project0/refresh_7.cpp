//5���� ó�� �������� 2
//���� ������ ������ ����� �ֽ��ϴ�
//1���� 100���� ������ ���ڸ� ����
//����ڿ��� ���ڸ� �Է��ϵ��� ��û
//����ڰ� �Է��� ���ڰ� ���� ���ں��� ũ�� "�ʹ� ���ƿ�!", ������ "�ʹ� �۾ƿ�!"��� �˷��ֱ�
//����ڰ� ���� ���ڸ� ���� ������ 2~3�� �ݺ�
//����ڰ� ���� ���ڸ� ������ "�����մϴ�!" �޼��� ���
//���� ����ڰ� ������ ����� ���� �Է��ϸ� "1���� 100������ ���ڸ� �Է����ּ���!" ��� �� �ٽ� ���ڸ� �Է��ϵ��� ��û

#include <iostream>
#include <random>

using namespace std;

int main()
{
	//1���� 100���� ������ ���� ����
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(1, 100);
	int answer = dist(gen);

	bool is_correct = false;
	int attempts = 0; //�õ� Ƚ��

	while (attempts<3 &&!is_correct) {
		try
		{
			int number = 0;
			//���� �ڵ� �ۼ�
			cout << "���ڸ� �Է��ϼ���";
			cin >> number;
			if (number > answer)
			{
				cout << "�ʹ� ���ƿ�!";
				attempts++;
			}
			else if (number < answer)
			{
				cout << "�ʹ� �۾ƿ�!";
				attempts++;
			}
			
			else
			{
				cout << "�����մϴ�!";
				is_correct = true;
			}
			if (number < 1 || number>100)
			{
				cout << "1���� 100 ������ ���ڸ� �Է����ּ���!" << endl;
				attempts++;
				continue;
			}
			
		}
		catch (const exception& e)
		{
			cerr << e.what() << endl;
		}
	}
	return 0;
}
