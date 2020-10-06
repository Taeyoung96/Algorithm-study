#include <iostream>

using namespace std;

int main() {
	int num = 0;

	cin >> num;

	if (num % 4 == 0) { //4의 배수인지 먼저 검사
		if(num % 100 != 0){  //100의 배수가 아니면 윤년
			cout << "1" << endl;
		}
		else if ((num % 100 == 0) && (num % 400 == 0)) {  //100의 배수더라도 400의 배수면 윤년
			cout << "1" << endl;
		}
		else {      //나머지는 윤년이 아니다.
			cout << "0" << endl;
		}
	}

	else {
		cout << "0" << endl;
	}
}
