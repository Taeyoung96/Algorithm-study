#include<iostream>
#include<algorithm>

using namespace std;

int work[2][1001] = { 0, };
int switching[2][1001] = { 0, };
int result[2][1001] = { 0, };

int main(int argc, char** argv)
{
	int num = 0;
	int work_a = 0, work_b = 0;
	int switch_a2b = 0, switch_b2a = 0;

	cin >> num;

	// for문을 돌면서 입력
	for (int i = 0; i < num-1; i++) {
		
		cin >> work_a >> work_b;
		cin >> switch_a2b >> switch_b2a;
		work[0][i] = work_a;
		work[1][i] = work_b;
		switching[0][i] = switch_a2b;
		switching[1][i] = switch_b2a;
	}

	// 마지막 작업장 시간 입력
	cin >> work_a >> work_b;
	work[0][num - 1] = work_a;
	work[1][num - 1] = work_b;

	// 처음 result 바로 대입
	result[0][0] = work[0][0];
	result[1][0] = work[1][0];

	// result 계산
	for (int j = 1; j <= num; j++) {
		int shortest_a = min(result[0][j - 1], result[1][j - 1] + switching[1][j - 1]);
		result[0][j] = shortest_a + work[0][j];

		int shortest_b = min(result[1][j - 1], result[0][j - 1] + switching[0][j - 1]);
		result[1][j] = shortest_b + work[1][j];
	}

	int answer = 0;
	answer = min(result[0][num - 1], result[1][num - 1]);

	cout << answer << "\n";

	return 0;
}