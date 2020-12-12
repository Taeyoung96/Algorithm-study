#include <iostream>
#include <cmath>

using namespace std;

// 같은 행에는 하나의 퀸밖에 놓지 못한다. (2차원 배열이 아닌 1차원 배열로도 해결할 수 있는 이유)
// 같은 열에 있는지 check, 대각선에 있는지 check한다.
// 모든 for문을 통과한다면 경우의 수 + 1
int col[15] = { 0, };
int cnt = 0;

// 만약 같은 행이나 대각 선에 퀸이 존재하는지 검사
bool check(int i) {
	for (int j = 0; j < i; j++) {
		if ((col[j] == col[i]) || (abs(col[j]-col[i]) == abs(j-i))) {
			return false;
		}
	}
	return true;
}

// 재귀함수 - check함수를 통해 모든 경우가 아닌 가능한 경우만 조사 (벡트레킹)
// input : 현재 몇번 째 열인지 알려줌, n : 총 (n x n) 행렬에 대해 조사
// ouput : cnt가 몇번 되었는지?
void n_Queen(int input, int n) {
	if (input == n) {	// 모든 경우를 다 통과하였으면 경우의 수 +1
		cnt++;
	}
	else {
		for (int i = 0; i < n; i++) {
			col[input] = i;		// 해당 열에 퀸을 하나 놓는다.
			if (check(input)) {
				n_Queen(input + 1, n);	// 조건에 맞으면 다음 열에 하나 놓는다.
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