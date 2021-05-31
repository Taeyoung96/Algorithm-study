#include<iostream>
#include<vector>


using namespace std;

int strong[100001] = { 0, };
// 0 : 내가 세다고 인식
// 1 : 내가 세지 않다고 인식

int main(int argc, char** argv)
{
	vector<int> v;
	int n, m;

	cin >> n;
	cin >> m;

	for (int i = 0; i < n; i++) {
		int num = 0;
		cin >> num;
		v.push_back(num);
	}

	for (int j = 0; j < m; j++) {
		int know1, know2;
		cin >> know1;
		cin >> know2;

		know1 = know1 - 1;	// index 값 접근을 위해
		know2 = know2 - 1;

		// 앞에 사람이 더 세다
		if (v[know1] > v[know2]) {
			strong[know2] = 1;
		}

		// 뒤에 사람이 더 세다
		else if (v[know1] < v[know2]) {
			strong[know1] = 1;
		}

		// 같을 때
		else {
			strong[know1] = 1;	// 안 세다고 인식
			strong[know2] = 1;	// 안 세다고 인식
		}
	}

	int result = 0;
	for (int i = 0; i < n; i++) {
		if (strong[i] != 1) {
			result++;
		}
	}

	cout << result << "\n";

	return 0;
}