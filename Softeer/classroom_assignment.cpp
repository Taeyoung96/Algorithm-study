#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// ������ �ð��� �̿��Ͽ� �����ϱ� ���� ���� �Լ� - ������������
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

	// ���۰� �� ���̰� ���� ������ ����
	sort(v.begin(), v.end(), compareDiff);

	int tmpLastTime = 0;

	for (int i = 0; i < num; i++) {
		int tmpStartTime = v[i].first;
		int tmpEndTime = v[i].second;

		// �ʱⰪ ����
		if (i == 0) {
			tmpLastTime = tmpEndTime;
			result++;
		}

		// �ι�°����, startTime�� ���� ������ �ð� ��
		if ((i > 0) && (tmpStartTime >= tmpLastTime)) {
			tmpLastTime = tmpEndTime;
			result++;
		}
	}


	cout << result << "\n";

	return 0;
}

