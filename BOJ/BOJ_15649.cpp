#include <iostream>

using namespace std;

int  num[9] = { 0, };	// ���ڸ� ���� �迭
bool check[9] = { 0, }; // �湮�� �ߴ��� ���ߴ��� �˻�

// ���� cnt == m �̸�, num �迭�� �ִ� ���ڵ� ��� ��� �� return (��� �Լ��� ����� ���̱� ����)
// for������ �ݺ��ϸ鼭 � �ڸ��� ���ڸ� �ִ��� check
// num array update
// ����Լ�(cnt+1)
// check�� �ٽ� ���󺹱� ���ش�.
void dfs(int cnt, int n, int m) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << num[i] << " ";
		}
		cout << "\n";
	}

	for (int i = 1; i <= n; i++) {
		if (!check[i]) {
			check[i] = true;
			num[cnt] = i;
			dfs(cnt + 1, n, m);
			check[i] = false;
		}
	}


}

int main() {
	int n = 0, m = 0;
	cin >> n;
	cin >> m;
	dfs(0, n, m);
	
}