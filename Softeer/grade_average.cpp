#include <iostream>
#include <vector>
#include <queue>
#include <math.h>

using namespace std;

long long arr[1000001] = { 0, };
long long score_sum[1000001] = {0,};

int main(int argc, char** argv)
{
	ios::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	cout.precision(2);
	cout << fixed;

	long long n, k, sum = 0.;

	cin >> n;
	cin >> k;

	for (long long i = 1; i <= n; i++) {
		
		int score = 0;
		cin >> score;
		arr[i] = score;
		score_sum[i] = arr[i] + score_sum[i-1];
	}

	for (long long j = 0; j < k; j++){
		long long start, end;
		cin >> start;
		cin >> end;

		long long num = end - start + 1;
		long long startIdx = start - 1;
		long long endIdx = end;
		long long startSum, endSum;

		
		startSum = score_sum[startIdx];
		endSum = score_sum[endIdx];

		double avg = static_cast<double>(endSum - startSum) / static_cast<double>(num);

		cout << avg << "\n";

	}

	return 0;
}