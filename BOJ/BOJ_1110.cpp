#include <iostream>

using namespace std;

int main() {
	//변수 선언
	int num = 0;
	int input = 0;
	int input_tens_digit = 0;
	int input_ones_digit = 0;
	int sum = 0;
	int sum_tens_digit = 0;
	int sum_ones_digit = 0;
	int result = 0;
	int cnt = 0;

	cin >> num;    //숫자 하나를 입력받는다.

	if (num < 0 || num >= 100) {   //숫자가 조건에 맞는지 확인
		while (1) {
			cout << "Please choose another number!" << endl;
			cin >> num;
			if (num >= 0 && num < 100) {
				break;
			}
		}
	}

	input = num;  //입력 받은 숫자를 input으로 넣어준다.

	while (1) {
		cnt += 1;     //while문을 몇번 돌았는지 세어주기 위한 변수

		input_tens_digit = input / 10;   //입력 받은 숫자를 십의 자리와 일의 자리를 나눠준다.
		input_ones_digit = input % 10;
		
		sum = input_tens_digit + input_ones_digit;   //그 둘의 합을 만든다.

		sum_tens_digit = sum / 10;     //합의 십의 자리와 일의 자리를 나눈다.
		sum_ones_digit = sum % 10;

		result = (input_ones_digit * 10) + sum_ones_digit;    
		//(입력 받은 숫자 일의 자리 * 10) + 합의 일의 자리

		if (result == num) {   //처음 입력과 결과값이 같으면 while문 탈출
			break;
		}
		input = result;        //결과 값을 input으로 넣어준다.
	}

	cout << cnt << endl;
}