#include <iostream>
#include <cstdlib>

using namespace std;

//���� ó�� �Լ�
void myterminate()
{
	cout << "myterminate called" << endl;
	exit(-1); //���α׷� ������������ ����
}

int main(void)
{
	set_terminate(myterminate);
	throw 1; //���� �߻�
	return 0; //throw�� ���ܸ� ������ ������ �������x
}