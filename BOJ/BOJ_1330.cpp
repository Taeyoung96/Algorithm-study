#include <iostream>

using namespace std;

int main() {
	int num1 = 0;
	int num2 = 0;

	cin >> num1 >> num2;  //�� ���� �Է�

	if ((num1 < -10001) | (num1 > 10001) | (num2 < -10001) | (num2 > 10001)) { //���� �ȿ� ���ִ��� �˻�
		cout << "Please enter another number!" << endl;
		cin >> num1 >> num2;
		while (1) {       //���ѷ����� ���� ���� ���� �˻�
			if ((num1 < -10001) | (num1 > 10001) | (num2 < -10001) | (num2 > 10001)) {
				cout << "Please enter another number!" << endl;
				cin >> num1 >> num2;
			}
			else {      //���ǿ� ������ ���
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