#include <iostream>

using namespace std;

// dead num�� �� �ڸ��� ���� ���ڸ� ���ϰ� ������ ��
// ������ ���ڵ� ���� ��
// if�� �Ἥ �� �ڿ��� ���� �񱳸� �ؼ� ������ break
// �ƴϸ� ��� count++

int main() {
	int input = 0;
	int cnt = 0;
	int dead_num = 665;
	int list[8] = { 0, };
	int result_dead_num = 0;

	cin >> input;
	
	while (true) {
		dead_num++;
		
		list[0] = (dead_num % 100000000) / 10000000;	// õ���� �ڸ�
		list[1] = (dead_num % 10000000) / 1000000;	// �鸸�� �ڸ�
		list[2] = (dead_num % 1000000) / 100000;	// �ʸ��� �ڸ�
		list[3] = (dead_num % 100000) / 10000;	// ���� �ڸ�
		list[4] = (dead_num % 10000) / 1000;	// õ�� �ڸ�
		list[5] = (dead_num % 1000) / 100;	// ���� �ڸ�
		list[6] = (dead_num % 100) / 10;	// ���� �ڸ�
		list[7] = (dead_num % 10);			// ���� �ڸ�

		// ������ �� �ڸ����� ��� 6�� ���
		if ((list[7]==6) && (list[6]==6) && (list[5] == 6)) {	
			result_dead_num = dead_num;
			cnt++;
		}
		else if ((list[6] == 6) && (list[5] == 6) && (list[4] == 6)) {
			result_dead_num = dead_num;
			cnt++;
		}
		else if ((list[5] == 6) && (list[4] == 6) && (list[3] == 6)) {
			result_dead_num = dead_num;
			cnt++;
		}
		else if ((list[4] == 6) && (list[3] == 6) && (list[2] == 6)) {
			result_dead_num = dead_num;
			cnt++;
		}
		else if ((list[3] == 6) && (list[2] == 6) && (list[1] == 6)) {
			result_dead_num = dead_num;
			cnt++;
		}
		else if ((list[2] == 6) && (list[1] == 6) && (list[0] == 6)) {
			result_dead_num = dead_num;
			cnt++;
		}

		// ���� input�� cnt�� ���� ���� ����
		if (cnt == input) {
			printf("%d", result_dead_num);
			break;
		}
	}
	
}