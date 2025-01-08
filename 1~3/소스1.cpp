#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
	float float_value = 9.87654321f;
	double double_value = 9.87654321987654321;
	long double long_double_value = 9.87654321987654321l;

	cout << "float :" << sizeof(float) << "bytes" << endl;
	cout << "float :" <<
		setprecision(numeric_limits<float>::digits10 + 1) <<
		float_value << endl << endl;

	cout << "double :" << sizeof(double) << "bytes" << endl;
	cout << "double_value :" <<
		setprecision(numeric_limits<double>::digits10 + 1) <<
		double_value << endl << endl;

	cout << "long double :" << sizeof(long double) << "bytes" << endl;
	cout << "long_double_value :" <<
		setprecision(numeric_limits<long double>::digits10 + 1) <<
		long_double_value << endl << endl;

	return 0;

}

#include <iostream>

using namespace std;

int main()
{
	float float_value = 1.5f;

	double double_value = float_value;
	int int_value = float_value;

	cout << "float_value:" << float_value << endl;
	cout << "double_value:" << double_value << endl;
	cout << "int_value:" << int_value << endl;

	return 0;
}


#include <iostream>

using namespace std;

int main()
{
	int int_a = 10;
	int int_b = 5;

	int int_avg = (int_a + int_b) / 2;
	float float_avg_1 = (int_a + int_b) / 2;
	float float_avg_2 = float(int_a + int_b) / 2;

	cout << "int_avg:" << int_avg << endl;
	cout << "float_avg_1" << float_avg_1 << endl;
	cout << "float_avg_2" << float_avg_2 << endl;

	return 0;
}