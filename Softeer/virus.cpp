#include<iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int k, p, n, target = 1000000007;
	int answer;
	cin >> k;
	cin >> p;
	cin >> n;

	for (int i = 0; i < n; i++) {
		if (i == 0) {
			answer = k * p;
		}
		else {
			answer = answer * p;
		}
		answer = answer % target;
	}

	answer = answer % target;

	cout << answer << endl;

	return 0;
}