//사용자 정의 리터럴로 거리 단위 변환하기
#include <iostream>
using namespace std;
const long double km_per_mile = 1.609344L;
long double operator"" _km(long double val) //_km 사용자 정의
{
	return val; //아무런 작업 없이 반환
}

long double operator"" _mi(long double val) //_ml 사용자 정의
{
	return val * km_per_mile;
}

int main()
{
	long double distance_1 = 1.0_km;
	long double distance_2 = 1.0_mi;

	cout << distance_1 + distance_2 << "km" << endl; //킬로미터로 출력

	return 0;
}
