//���� �����ϱ�
#include <iostream>
using namespace std;

int main() {
    int divisor = 0;

    try {
        cout << "divisor�� �Է��ϼ���: ";
        cin >> divisor;

        if (divisor == 0) {
            throw "0���� ���� �� ����";
        }

        int result = 10 / divisor;
        cout << "���: " << result << endl;
    }
    catch (const char* err) { // ���ڿ� ���� ó�� �߰�
        cout << "���� �߻�: " << err << endl;
    }
    catch (int a) {
        cout << "catch " << a << endl;
    }
    catch (...) {
        cout << "catch all" << endl;
    }

    return 0;
}
