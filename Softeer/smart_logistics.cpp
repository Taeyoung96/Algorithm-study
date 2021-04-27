#include <iostream>
#include <string>

using namespace std;

bool available[20001] = {false};

int main(int argc, char** argv)
{
	int n,k;
	int cnt = 0;

	cin >> n;
	cin >> k;

	string input;
	cin >> input;

	// 물류인것 true로 바꿈
	for (int i = 0; i < input.size(); i++) {
		if (input[i] == 'H') {
			available[i] = true;
		}
	}

	// 로봇인 것 걸리면 그 양 옆 검사
	// 맨 왼쪽부터 물류 있으면 false로 바꾸고 다음으로
	for (int i = 0; i < input.size(); i++) {
		if (input[i] == 'P') {
			for (int j = i - k; j <= i + k; j++) {
				// 양수일때만 검사
				if (j >= 0) {
					if (available[j] == true) {
						available[j] = false;
						cnt++;
						break;
					}
				}
			}
		}
	}

	cout << cnt << "\n";

	return 0;
}