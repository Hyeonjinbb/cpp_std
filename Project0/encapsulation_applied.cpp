#include <iostream>
#include <array>

using namespace std;

class manage_data_structure {
public:
    manage_data_structure();
    int get_current_index() { return current_index; };//���� �ε��� ��ȯ
    void set_current_index(int new_index); //���ο� �ε��� ����, ��ȿ���� ���� �ε��� ����(0~9��) 
    int get_array_value() { return data_queue[current_index]; }; //current_index�� ����Ű�� �迭�� ���� ��ȯ
private:
    int current_index;
    array<int, 10> data_queue;
};

manage_data_structure::manage_data_structure() :
    current_index(0), data_queue{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 } //�迭�� �ʱⰪ 0~9 ����, ���� �ε��� 0 �ʱ�ȭ
{
}

void manage_data_structure::set_current_index(int new_index) { //��ȿ�� �˻�
    if (new_index < 0 || new_index >= 10)
        return;

    current_index = new_index;
}

int main(void) {
    int data, index;
    manage_data_structure data_structure;
    //-1�� �ε����� ����( ��ȿ���� ���� �ε���, ���� ���õ�)
    data_structure.set_current_index(-1);
    index = data_structure.get_current_index(); //current_index�� ������ 0
    data = data_structure.get_array_value();//data_queue[0] �� ��ȯ
    cout << "Data [" << index << "] : " << data << endl; //���

    return 0;
}