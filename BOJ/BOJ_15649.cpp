#include <iostream>

using namespace std;

int  num[9] = { 0, };	// 숫자를 담을 배열
bool check[9] = { 0, }; // 방문을 했는지 안했는지 검사

// 만약 cnt == m 이면, num 배열에 있는 숫자들 모두 출력 후 return (재귀 함수로 사용할 것이기 때문)
// for문으로 반복하면서 어떤 자리에 숫자를 넣는지 check
// num array update
// 재귀함수(cnt+1)
// check를 다시 원상복귀 해준다.
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