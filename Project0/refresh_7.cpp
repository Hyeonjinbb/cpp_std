//5예외 처리 실전연습 2
//숫자 맞히기 게임을 만들고 있습니다
//1부터 100까지 무작위 숫자를 생성
//사용자에게 숫자를 입력하도록 요청
//사용자가 입력한 숫자가 랜덤 숫자보다 크면 "너무 높아요!", 작으면 "너무 작아요!"라고 알려주기
//사용자가 랜덤 숫자를 맞힐 때까지 2~3번 반복
//사용자가 랜덤 숫자를 맞히면 "축하합니다!" 메세지 출력
//만약 사용자가 범위를 벗어나는 숫자 입력하면 "1부터 100사이의 숫자를 입력해주세요!" 출력 후 다시 숫자를 입력하도록 요청

#include <iostream>
#include <random>

using namespace std;

int main()
{
	//1부터 100까지 무작위 숫자 생성
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(1, 100);
	int answer = dist(gen);

	bool is_correct = false;
	int attempts = 0; //시도 횟수

	while (attempts<3 &&!is_correct) {
		try
		{
			int number = 0;
			//정답 코드 작성
			cout << "숫자를 입력하세요";
			cin >> number;
			if (number > answer)
			{
				cout << "너무 높아요!";
				attempts++;
			}
			else if (number < answer)
			{
				cout << "너무 작아요!";
				attempts++;
			}
			
			else
			{
				cout << "축하합니다!";
				is_correct = true;
			}
			if (number < 1 || number>100)
			{
				cout << "1부터 100 사이의 숫자를 입력해주세요!" << endl;
				attempts++;
				continue;
			}
			
		}
		catch (const exception& e)
		{
			cerr << e.what() << endl;
		}
	}
	return 0;
}
