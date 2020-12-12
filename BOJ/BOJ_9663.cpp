#include <iostream>
#include <cmath>

using namespace std;

// ���� �࿡�� �ϳ��� ���ۿ� ���� ���Ѵ�. (2���� �迭�� �ƴ� 1���� �迭�ε� �ذ��� �� �ִ� ����)
// ���� ���� �ִ��� check, �밢���� �ִ��� check�Ѵ�.
// ��� for���� ����Ѵٸ� ����� �� + 1
int col[15] = { 0, };
int cnt = 0;

// ���� ���� ���̳� �밢 ���� ���� �����ϴ��� �˻�
bool check(int i) {
	for (int j = 0; j < i; j++) {
		if ((col[j] == col[i]) || (abs(col[j]-col[i]) == abs(j-i))) {
			return false;
		}
	}
	return true;
}

// ����Լ� - check�Լ��� ���� ��� ��찡 �ƴ� ������ ��츸 ���� (��Ʈ��ŷ)
// input : ���� ��� ° ������ �˷���, n : �� (n x n) ��Ŀ� ���� ����
// ouput : cnt�� ��� �Ǿ�����?
void n_Queen(int input, int n) {
	if (input == n) {	// ��� ��츦 �� ����Ͽ����� ����� �� +1
		cnt++;
	}
	else {
		for (int i = 0; i < n; i++) {
			col[input] = i;		// �ش� ���� ���� �ϳ� ���´�.
			if (check(input)) {
				n_Queen(input + 1, n);	// ���ǿ� ������ ���� ���� �ϳ� ���´�.
			}
		}
	}
}

int main() {
	int n = 0;
	cin >> n;
	n_Queen(0,n);
	cout << cnt << '\n';
}