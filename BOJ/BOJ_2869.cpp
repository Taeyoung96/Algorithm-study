#include <iostream>

using namespace std;

// 이거 사용하면 시간초과 뜸
int snailClimbing(int up, int down, int goal);

int main() {
	int a = 0;
	int b = 0;
	int v = 0;
	int result = 0;
	int remainder = 0;

	cin >> a >> b >> v;   // 숫자를 공백으로 입력 받기

	// result = snailClimbing(a, b, v);
	result = ((v - b) / (a - b));
	remainder = ((v - b) % (a - b));
	
	if (remainder != 0) {
		result += 1;
	}
	

	cout << result << endl;
}

int snailClimbing(int up, int down, int goal)
{
	int day = 0;
	int climb = 0;

	while (climb < goal) {
		day += 1;
		climb += up;
		if (climb >= goal) {
			break;
		}
		climb -= down;
	}

	return day;
}
