#include <iostream>

using namespace std;

int main() {
	//���� ����
	int num = 0;
	int input = 0;
	int input_tens_digit = 0;
	int input_ones_digit = 0;
	int sum = 0;
	int sum_tens_digit = 0;
	int sum_ones_digit = 0;
	int result = 0;
	int cnt = 0;

	cin >> num;    //���� �ϳ��� �Է¹޴´�.

	if (num < 0 || num >= 100) {   //���ڰ� ���ǿ� �´��� Ȯ��
		while (1) {
			cout << "Please choose another number!" << endl;
			cin >> num;
			if (num >= 0 && num < 100) {
				break;
			}
		}
	}

	input = num;  //�Է� ���� ���ڸ� input���� �־��ش�.

	while (1) {
		cnt += 1;     //while���� ��� ���Ҵ��� �����ֱ� ���� ����

		input_tens_digit = input / 10;   //�Է� ���� ���ڸ� ���� �ڸ��� ���� �ڸ��� �����ش�.
		input_ones_digit = input % 10;
		
		sum = input_tens_digit + input_ones_digit;   //�� ���� ���� �����.

		sum_tens_digit = sum / 10;     //���� ���� �ڸ��� ���� �ڸ��� ������.
		sum_ones_digit = sum % 10;

		result = (input_ones_digit * 10) + sum_ones_digit;    
		//(�Է� ���� ���� ���� �ڸ� * 10) + ���� ���� �ڸ�

		if (result == num) {   //ó�� �Է°� ������� ������ while�� Ż��
			break;
		}
		input = result;        //��� ���� input���� �־��ش�.
	}

	cout << cnt << endl;
}