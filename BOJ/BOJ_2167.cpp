#include <iostream>
#include <time.h>

using namespace std;

int main() 
{
	clock_t start, end;
	double res;
	start = clock(); //시간 측정 시작

	cin.tie(NULL);	// 시간 줄이기용
	ios::sync_with_stdio(false);	// 시간 줄이기용 - 버퍼를 비워준다

	int n = 0, m = 0;
	int repeat = 0;

	cin >> n >> m;

	int **arr = new int *[n];	// 2차원 배열 동적할당 - 행 먼저 선언
	for (int row = 0; row < n; row++) {
		arr[row] = new int[m];	// 행 선언
		for (int col = 0; col < m; col++) {
			cin >> arr[row][col];	// 2차원 행렬 원소 추가 [Y][X]
		}
	}

	cin >> repeat;	// K개 입력

	for (int num = 0;num < repeat; num++) {
		int i = 0, j = 0, x = 0, y = 0;
		int sum = 0;
		cin >> i >> j >> x >> y;

		for (int width = i; width <= x; width++) {
			for (int height = j; height <= y; height++) {
				sum += arr[width-1][height-1];
			}
		}
		cout << sum << endl;
	}

	/* 메모리 해제*/
	for (int i = 0; i < n; ++i) {
		delete[] arr[i];
	}
	delete[] arr;

	end = clock(); //시간 측정 끝
	res = (double)(end - start);
	//printf("%f", res);

}