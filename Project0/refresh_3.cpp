//예외 설정하기
#include <iostream>
using namespace std;

int main() {
    int divisor = 0;

    try {
        cout << "divisor를 입력하세요: ";
        cin >> divisor;

        if (divisor == 0) {
            throw "0으로 나눌 수 없음";
        }

        int result = 10 / divisor;
        cout << "결과: " << result << endl;
    }
    catch (const char* err) { // 문자열 예외 처리 추가
        cout << "예외 발생: " << err << endl;
    }
    catch (int a) {
        cout << "catch " << a << endl;
    }
    catch (...) {
        cout << "catch all" << endl;
    }

    return 0;
}
