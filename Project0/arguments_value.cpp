#include <iostream>
using namespace std;

void change_negative(int _val)
{
	if (_val > 0)
	{
		_val = -_val;
	}
}


int main()
{
	int a = 3, b = -3;

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	change_negative(a);
	change_negative(b);

	cout << "change_negative(a): " << a << endl;
	cout << "change_negative(b): " << b << endl;

	return 0;
}
//양수->음수로 바뀌지 않은 이유?
//매개변수 _val이 change_negative 함수 내부에서만 효력이 있는 지역변수이기 때문