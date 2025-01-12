#include <iostream>
#include <cstdlib>

using namespace std;

//종료 처리 함수
void myterminate()
{
	cout << "myterminate called" << endl;
	exit(-1); //프로그램 비정상적으로 종료
}

int main(void)
{
	set_terminate(myterminate);
	throw 1; //예외 발생
	return 0; //throw로 예외를 던졌기 때문에 실행되지x
}