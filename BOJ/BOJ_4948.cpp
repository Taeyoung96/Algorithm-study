#include <iostream>
#include <time.h>
#include <vector>

#define SIZE 246913

using namespace std;

int main() {
	clock_t start, end;
	double result = 0;
	vector<int> input;
	
	start = clock(); //�ð� ���� ����

	while (true) {		// input �޴°� ��� �̷��� ���� ���� ���� �Ҽ��� ������ ���ϴ°� �� ����
		int tmp = 0;
		cin >> tmp;
		input.push_back(tmp);
		if (input.back() == 0) {
			input.pop_back();
			break;
		}
	}

	// 1. input ���� �ϳ��� ������ �� ���� �̿��Ͽ� ������ ����
	// i<x<=2*i
	for (int i = 0; i < input.size(); i++) {
		int number = input[i];
		int max = 2 * number;
		int cnt = 0;
		int primeNumberSelect[SIZE] = { 0, }; // �ִ�� ���� �� �ִ� ���ڰ� 246912�̹Ƿ�

		// �迭 �ʱ�ȭ
		for (int j = (number + 1); j <= max; j++) {
			primeNumberSelect[j] = j;
		}
		
		// 2���� �����ؼ� Ư�� ���� �ش��ϴ� ����� ��� �����.
		for (int j = 2; (j*j)<= max; j++) {
			for (int xsample = (j*j); xsample < (max + 1); xsample += j) {	// ���ﶧ �� ������� ������ ���� ��� 0����
				primeNumberSelect[xsample] = 0;
			}
	
			if (primeNumberSelect[j] == 0) {	// �̹� 0�̸� Pass - �� �̰� �ڷ� �Ⱥ����� ��� for���� �ǳ� �پ���..
				continue;
			}
		}
		
		// �Ҽ��� ����
		for (int j = (number + 1); j <= max; j++) {
			if (!(primeNumberSelect[j] == 0)) {
				cnt++;
				
			}
		}

		cout << cnt << '\n';
	}


	end = clock(); //�ð� ���� ��
	result = (double)(end - start);
	//printf("%f", result);

	return 0;

}

