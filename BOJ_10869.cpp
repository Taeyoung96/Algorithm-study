#include <iostream>

using namespace std;

int main() {

	int num1 = 0;
	int num2 = 0;

	cin >> num1 >> num2;

 	if((num1 > 10000) || (num1 < 0) || (num2 > 10000) || (num2 < 0)) {  //���ǿ� �´��� Ȯ��
		cout << "Please enter another number!" << endl;
		cin >> num1 >> num2;
		while(1) {
			if ((num1 > 10000) || (num1 < 0) || (num2 > 10000) || (num2 < 0)) { //���ǿ� ������ while�� �ȿ��� �� update
				cout << "Please enter another number!" << endl;
				cin >> num1 >> num2;
			}
			else { //�ƴϸ� while�� Ż��
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