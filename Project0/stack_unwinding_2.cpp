#include <iostream>
using namespace std;

void func_throw() {
	cout << endl;
	cout << "func_throw() �Լ� ����" << endl;
	cout << "throw -1" << endl;
	throw - 1; //���� ���� ���� ������
	cout << "after throw -1" << endl;
}

void func_2() {
	cout << endl;
	cout << "func_2() �Լ� ����" << endl;
	cout << "func_throw() ȣ��" << endl;
	func_throw();
	cout << "after func_throw()" << endl;
}

void func_1() {
	cout << endl;
	cout << "func_1() �Լ� ����" << endl;
	cout << "func_throw() ȣ��" << endl;
	func_2();
	cout << "after func_2()" << endl;
}

int main() {
	cout << "main ����" << endl;
	try {
		cout << "func_1() ȣ��" << endl;
		func_1();
	}
	catch (int exec) {
		cout << endl;
		cout << "catch" << exec << endl;
	}
	return 0;
}