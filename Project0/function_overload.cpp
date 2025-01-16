#include <iostream>
using namespace std;

class character {
public:
    character() : location{ 0,0 } {
    };
    // x, y ��ǥ�� �Ű������� ���� �Լ�
    void move(int x, int y) {
        location[0] = x;
        location[1] = y;
        cout << location[0] << ", " << location[1] << "�� �̵�" << endl;
    };
    // x, y �迭�� �迭 ũ�⸦ �Ű������� ������ �Լ�
    void move(int x[], int y[], int spot_count) {
        for (int i = 0; i < spot_count; ++i) {
            location[0] = x[i];
            location[1] = y[i];
            cout << i + 1 << "��°:" << location[0] << ", " << location[1] << "�� �̵�" << endl;
        }
    }

protected:
    int location[2];
};

int main(void) {
    character character_obj;
    int x_list[3] = { 10, 15, 20 };
    int y_list[3] = { 10, 15, 20 };

    // x, y ��ǥ�� �Ű������� ������ �Լ� ȣ��
    character_obj.move(10, 10);
    cout << endl;
    // x, y �迭�� �迭 ũ�⸦ �Ű������� ������ �Լ� ȣ��
    character_obj.move(x_list, y_list, 3);
}
