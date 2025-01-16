#include <iostream>
#include <array>

using namespace std;

class manage_data_structure {
public:
    manage_data_structure();
    int get_current_index() { return current_index; };//현재 인덱스 반환
    void set_current_index(int new_index); //새로운 인덱스 설정, 유효하지 않은 인덱스 무시(0~9외) 
    int get_array_value() { return data_queue[current_index]; }; //current_index가 가리키는 배열의 값을 반환
private:
    int current_index;
    array<int, 10> data_queue;
};

manage_data_structure::manage_data_structure() :
    current_index(0), data_queue{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 } //배열은 초기값 0~9 설정, 현재 인덱스 0 초기화
{
}

void manage_data_structure::set_current_index(int new_index) { //유효성 검사
    if (new_index < 0 || new_index >= 10)
        return;

    current_index = new_index;
}

int main(void) {
    int data, index;
    manage_data_structure data_structure;
    //-1로 인덱스를 설정( 유효하지 않은 인덱스, 설정 무시됨)
    data_structure.set_current_index(-1);
    index = data_structure.get_current_index(); //current_index는 여전히 0
    data = data_structure.get_array_value();//data_queue[0] 값 반환
    cout << "Data [" << index << "] : " << data << endl; //출력

    return 0;
}