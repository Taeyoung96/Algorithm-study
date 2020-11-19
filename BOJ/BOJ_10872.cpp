#include <iostream>
#include <time.h>

using namespace std;

int recursive(int num);

int main() {
	clock_t start, end;
	double res;
	start = clock(); //�ð� ���� ����
	cin.tie(NULL);	// �ð� ���̱��
	ios::sync_with_stdio(false);	// �ð� ���̱�� - ���۸� ����ش�
	int input = 0;
	int result = 0;
	cin >> input;

	cout << recursive(input) << '\n';
	

	end = clock(); //�ð� ���� ��
	res = (double)(end - start);
	//printf("%f", res);
	
	return 0;
}

int recursive(int num) {
	if ((num == 1) ||(num == 0)) {
		return 1;
	}
	else {
		return num * recursive(num - 1);
	}
}