#include<iostream>

using namespace std;

int rocks[10001] = {1, };
int input[10001] = {0, };

int main(int argc, char** argv)
{
	int n = 0, cnt = 0, prev_highest = -1;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int height = 0;
		cin >> height;
		input[i] = height;
	}


	for (int i = 0; i < n; i++) {
		// 두번째 부터 검사
		if (i > 0) {
			int result_max = 0;

			for (int j = 0; j < i; j++){
				if (input[j] < input[i]){	
					if (rocks[j] >= result_max) {
						result_max = rocks[j];
					}

				}
			}

			rocks[i] = result_max + 1;
		}
		
	}

	int result = 0;
	for (int i = 0; i < n; i++) {
		if (result < rocks[i]) {
			result = rocks[i];
		}
	}

	cout << result << "\n";
	
	return 0;
}