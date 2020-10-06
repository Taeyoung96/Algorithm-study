#include <iostream>

using namespace std;

int main() {
	int num1 = 0;
	int num2 = 0;

	cin >> num1 >> num2;  //두 수를 입력

	if ((num1 < -10001) | (num1 > 10001) | (num2 < -10001) | (num2 > 10001)) { //범위 안에 들어가있는지 검사
		cout << "Please enter another number!" << endl;
		cin >> num1 >> num2;
		while (1) {       //무한루프를 통해 범위 무한 검사
			if ((num1 < -10001) | (num1 > 10001) | (num2 < -10001) | (num2 > 10001)) {
				cout << "Please enter another number!" << endl;
				cin >> num1 >> num2;
			}
			else {      //조건에 맞으면 통과
				break;
			}
		}
	}

	if (num1 > num2) {
		cout << ">" << endl;
	}
	else if (num1 < num2) {
		cout << "<" << endl;
	}
	else {
		cout << "==" << endl;
	}

}