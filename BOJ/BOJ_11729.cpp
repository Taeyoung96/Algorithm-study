#include <iostream>
#include <cmath>

using namespace std;

void hanoi(int n, int from, int to, int pass);
int hanoi_cnt(int n);

int main()
{
	int input = 0;
	int count = 0;
	
	cin >> input;
	cout << hanoi_cnt(input) << endl;
	hanoi(input, 1, 3, 2);
}

// �ϳ���ž Ǫ�� �Լ�
// parameters :
// n - ������ ����, from - �����
// to - ������, pass - ���ļ� ���� ����
void hanoi(int n, int from, int to, int pass)
{
	if (n == 1) {
		
		printf("%d %d\n", from, to);
		return;
	}
	else {
		hanoi(n - 1,from,pass,to);
		printf("%d %d\n", from, to);
		hanoi(n - 1, pass,to,from);
	}
}

// �ϳ���ž Ƚ�� ã�� �Լ�
// ��Ģ�� �̿�
int hanoi_cnt(int n)
{
	int tmp = pow(2, n - 1);
	tmp = (2 * (tmp - 1)) + 1;
	return tmp;
}