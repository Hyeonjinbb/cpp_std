#include <iostream>
using namespace std;

int main()
{
	for (int count = 0; count < 5; count++) {
		cout << "count: " << count << endl;
	}
 
	for (int count1 = 0; count1 < 10; count1++) {
		cout << "count1: " << count1 << endl;
		if (count1 == 8) {
			cout << "break�� �ݺ��� Ż��" << endl;
			break;
		}
	}
cout << "�ݺ��� ����" << endl;
return 0;
}