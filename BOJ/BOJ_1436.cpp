#include <iostream>

using namespace std;

// dead num을 각 자리수 마다 숫자를 구하고 저장한 뒤
// 인접한 숫자들 끼리 비교
// if문 써서 맨 뒤에서 부터 비교를 해서 맞으면 break
// 아니면 계속 count++

int main() {
	int input = 0;
	int cnt = 0;
	int dead_num = 665;
	int list[8] = { 0, };
	int result_dead_num = 0;

	cin >> input;
	
	while (true) {
		dead_num++;
		
		list[0] = (dead_num % 100000000) / 10000000;	// 천만의 자리
		list[1] = (dead_num % 10000000) / 1000000;	// 백만의 자리
		list[2] = (dead_num % 1000000) / 100000;	// 십만의 자리
		list[3] = (dead_num % 100000) / 10000;	// 만의 자리
		list[4] = (dead_num % 10000) / 1000;	// 천의 자리
		list[5] = (dead_num % 1000) / 100;	// 백의 자리
		list[6] = (dead_num % 100) / 10;	// 십의 자리
		list[7] = (dead_num % 10);			// 일의 자리

		// 인접한 세 자리수가 모두 6일 경우
		if ((list[7]==6) && (list[6]==6) && (list[5] == 6)) {	
			result_dead_num = dead_num;
			cnt++;
		}
		else if ((list[6] == 6) && (list[5] == 6) && (list[4] == 6)) {
			result_dead_num = dead_num;
			cnt++;
		}
		else if ((list[5] == 6) && (list[4] == 6) && (list[3] == 6)) {
			result_dead_num = dead_num;
			cnt++;
		}
		else if ((list[4] == 6) && (list[3] == 6) && (list[2] == 6)) {
			result_dead_num = dead_num;
			cnt++;
		}
		else if ((list[3] == 6) && (list[2] == 6) && (list[1] == 6)) {
			result_dead_num = dead_num;
			cnt++;
		}
		else if ((list[2] == 6) && (list[1] == 6) && (list[0] == 6)) {
			result_dead_num = dead_num;
			cnt++;
		}

		// 만약 input과 cnt가 같을 때가 정답
		if (cnt == input) {
			printf("%d", result_dead_num);
			break;
		}
	}
	
}