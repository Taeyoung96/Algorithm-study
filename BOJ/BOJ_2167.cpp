#include <iostream>
#include <time.h>

using namespace std;

int main() 
{
	clock_t start, end;
	double res;
	start = clock(); //�ð� ���� ����

	cin.tie(NULL);	// �ð� ���̱��
	ios::sync_with_stdio(false);	// �ð� ���̱�� - ���۸� ����ش�

	int n = 0, m = 0;
	int repeat = 0;

	cin >> n >> m;

	int **arr = new int *[n];	// 2���� �迭 �����Ҵ� - �� ���� ����
	for (int row = 0; row < n; row++) {
		arr[row] = new int[m];	// �� ����
		for (int col = 0; col < m; col++) {
			cin >> arr[row][col];	// 2���� ��� ���� �߰� [Y][X]
		}
	}

	cin >> repeat;	// K�� �Է�

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

	/* �޸� ����*/
	for (int i = 0; i < n; ++i) {
		delete[] arr[i];
	}
	delete[] arr;

	end = clock(); //�ð� ���� ��
	res = (double)(end - start);
	//printf("%f", res);

}