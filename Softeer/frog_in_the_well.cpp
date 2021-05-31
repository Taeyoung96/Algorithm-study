#include<iostream>
#include<vector>


using namespace std;

int strong[100001] = { 0, };
// 0 : ���� ���ٰ� �ν�
// 1 : ���� ���� �ʴٰ� �ν�

int main(int argc, char** argv)
{
	vector<int> v;
	int n, m;

	cin >> n;
	cin >> m;

	for (int i = 0; i < n; i++) {
		int num = 0;
		cin >> num;
		v.push_back(num);
	}

	for (int j = 0; j < m; j++) {
		int know1, know2;
		cin >> know1;
		cin >> know2;

		know1 = know1 - 1;	// index �� ������ ����
		know2 = know2 - 1;

		// �տ� ����� �� ����
		if (v[know1] > v[know2]) {
			strong[know2] = 1;
		}

		// �ڿ� ����� �� ����
		else if (v[know1] < v[know2]) {
			strong[know1] = 1;
		}

		// ���� ��
		else {
			strong[know1] = 1;	// �� ���ٰ� �ν�
			strong[know2] = 1;	// �� ���ٰ� �ν�
		}
	}

	int result = 0;
	for (int i = 0; i < n; i++) {
		if (strong[i] != 1) {
			result++;
		}
	}

	cout << result << "\n";

	return 0;
}