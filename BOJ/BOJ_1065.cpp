#include <iostream>

using namespace std;

int selectHansu(int num);

int main() {
	int number = 0;
	int cnt = 0;

	cin >> number;                        //���� �Է�

	for (int i = 1; i < (number+1); i++) {  
		if (i >= 1 && i < 100) {           //1���� 99������ ��� ���������̹Ƿ�
			cnt += 1;
		}
		else {
			cnt += selectHansu(i);           //�Ѽ��� ������ ī��Ʈ ����
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

	hundred_digit = num / 100;     //���� �ڸ� ��
	ten_digit = (num % 100) / 10;  //���� �ڸ� ��
	one_digit = (num % 10) / 1;    //���� �ڸ� ��

	subtract_hundred_To_ten = hundred_digit - ten_digit;   //���� �ڸ� - ���� �ڸ�
	subtract_ten_To_one = ten_digit - one_digit;           //���� �ڸ� - ���� �ڸ�

	if (subtract_hundred_To_ten == subtract_ten_To_one) {   //������ 1 ����
		return 1;
	}
	else {    //�ƴϸ� �״�� �α�
		return 0;
	}
	
}