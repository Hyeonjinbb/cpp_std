#include <iostream>
using namespace std;

int main()
{
	int* pt_int_value = new int; //���� �޸� �Ҵ�
	*pt_int_value = 100; 
	cout << *pt_int_value << endl;
	//������ ������ �޸� �ּҸ� �Ҵ��ϰ�, �ش� �޸� �ּ� ���� �ּ� ������ 100���� ������

	delete pt_int_value; //���� �޸� ����


	//�迭 ������ ���� �޸� �Ҵ�� ����
	int* pt_int_array_value = new int[5]; //�迭 ������ ���� �޸� �Ҵ�

	for (int i = 0; i < 5; i++)
	{
		pt_int_array_value[i] = i;

	}

	for (int i = 0; i < 5; i++)
	{
		cout << pt_int_array_value[i] << endl;
	}
	delete[] pt_int_array_value;

	return 0;
}