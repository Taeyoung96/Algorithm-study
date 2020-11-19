#include <iostream>
#include <time.h>

using namespace std;

int recursive(int num);

int main() {
	clock_t start, end;
	double res;
	start = clock(); //시간 측정 시작
	cin.tie(NULL);	// 시간 줄이기용
	ios::sync_with_stdio(false);	// 시간 줄이기용 - 버퍼를 비워준다
	int input = 0;
	int result = 0;
	cin >> input;

	cout << recursive(input) << '\n';
	

	end = clock(); //시간 측정 끝
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