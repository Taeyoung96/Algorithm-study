#include <iostream>

using namespace std;

int main() {
	int input = 0;

	cin >> input;

	int dividedBy5 = input / 5;      
	int remainder_5 = input % 5;

	int dividedBy3 = input / 3;
	int remainder_3 = input % 3;

	int wrong = -1;

	bool flag = false;

	while (dividedBy5 > 0) {
		int tmp = input - (5 * dividedBy5);

		if ((tmp % 3) == 0) {
			flag = true;
			cout << dividedBy5 + (tmp / 3) << endl;
			break;
		}
		dividedBy5--;   // �ϳ��� ����;
	}

	// 5kg�� ������� �ʰ� 3kg�� ����ϴ� ���
	if ((flag == false) && (remainder_3 == 0)){
		flag = true;
		cout << dividedBy3 << endl;
	}
	
	// for���� �� ���Ҵµ� if�� �ȿ� ���� �ʾ����� wrong
	if (flag == false) {
		cout << wrong << endl;
	}
	
}