#include <iostream>

using namespace std;

int main() {

	int num1 = 0;
	int num2 = 0;

	cin >> num1 >> num2;

 	if((num1 > 10000) || (num1 < 0) || (num2 > 10000) || (num2 < 0)) {  //조건에 맞는지 확인
		cout << "Please enter another number!" << endl;
		cin >> num1 >> num2;
		while(1) {
			if ((num1 > 10000) || (num1 < 0) || (num2 > 10000) || (num2 < 0)) { //조건에 맞으면 while문 안에서 수 update
				cout << "Please enter another number!" << endl;
				cin >> num1 >> num2;
			}
			else { //아니면 while문 탈출
				break;
			}
		}
	}

	cout << num1 + num2 << endl;
	cout << num1 - num2 << endl;
	cout << num1 * num2 << endl;
	cout << num1 / num2 << endl;
	cout << num1 % num2 << endl;
	
}
