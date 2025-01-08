//포인터 변수를 매개변수로 활용
#include <iostream>
using namespace std;

void change_negative(int* _val) //포인터 변수를 매개변수로 활용
{
	if (*_val > 0)
	{
		*_val = -(*_val);
	}
}

int main()
{
	int a = 3, b = -3;
	cout << "a: " << a << endl;
	cout << "b " << b << endl;

	change_negative(&a);
	change_negative(&a);

	cout << "change_negative(a): " << a << endl;
	cout << "change_negative(b): " << b << endl;
	return 0;

}