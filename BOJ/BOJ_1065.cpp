#include <iostream>

using namespace std;

int selectHansu(int num);

int main() {
	int number = 0;
	int cnt = 0;

	cin >> number;                        //숫자 입력

	for (int i = 1; i < (number+1); i++) {  
		if (i >= 1 && i < 100) {           //1부터 99까지는 모두 등차수열이므로
			cnt += 1;
		}
		else {
			cnt += selectHansu(i);           //한수가 있으면 카운트 증가
		}
		
	}

	cout << cnt << endl;
}

int selectHansu(int num){
	int hundred_digit = 0;
	int ten_digit = 0;
	int one_digit = 0;
	int subtract_hundred_To_ten = 0;
	int subtract_ten_To_one = 0;

	hundred_digit = num / 100;     //백의 자리 수
	ten_digit = (num % 100) / 10;  //십의 자리 수
	one_digit = (num % 10) / 1;    //일의 자리 수

	subtract_hundred_To_ten = hundred_digit - ten_digit;   //백의 자리 - 십의 자리
	subtract_ten_To_one = ten_digit - one_digit;           //십의 자리 - 일의 자리

	if (subtract_hundred_To_ten == subtract_ten_To_one) {   //같으면 1 증가
		return 1;
	}
	else {    //아니면 그대로 두기
		return 0;
	}
	
}