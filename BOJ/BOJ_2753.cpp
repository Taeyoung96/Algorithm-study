#include <iostream>

using namespace std;

int main() {
	int num = 0;

	cin >> num;

	if (num % 4 == 0) { //4�� ������� ���� �˻�
		if(num % 100 != 0){  //100�� ����� �ƴϸ� ����
			cout << "1" << endl;
		}
		else if ((num % 100 == 0) && (num % 400 == 0)) {  //100�� ������� 400�� ����� ����
			cout << "1" << endl;
		}
		else {      //�������� ������ �ƴϴ�.
			cout << "0" << endl;
		}
	}

	else {
		cout << "0" << endl;
	}
}
