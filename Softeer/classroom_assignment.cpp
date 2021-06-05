#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 끝나는 시간을 이용하여 정렬하기 위해 만든 함수 - 오름차순으로
bool compareDiff( pair<int,int> &a, pair<int,int> &b) {
	int diff1 = a.second;
	int diff2 = b.second;

	if (diff1 >= diff2) {
		return false;
	}
	else {
		return true;
	}
}

int main(int argc, char** argv)
{
	int num = 0;
	cin >> num;
	int result = 0;

	vector<pair<int, int>> v;

	for (int i = 0; i < num; i++) {
		int start = 0;
		int end = 0;
		cin >> start >> end;

		v.push_back(make_pair(start, end));
	}

	// 시작과 끝 차이가 적은 순으로 정렬
	sort(v.begin(), v.end(), compareDiff);

	int tmpLastTime = 0;

	for (int i = 0; i < num; i++) {
		int tmpStartTime = v[i].first;
		int tmpEndTime = v[i].second;

		// 초기값 설정
		if (i == 0) {
			tmpLastTime = tmpEndTime;
			result++;
		}

		// 두번째부터, startTime과 이전 끝나는 시간 비교
		if ((i > 0) && (tmpStartTime >= tmpLastTime)) {
			tmpLastTime = tmpEndTime;
			result++;
		}
	}


	cout << result << "\n";

	return 0;
}

