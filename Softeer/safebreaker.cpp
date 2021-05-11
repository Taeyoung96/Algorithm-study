#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// vector<pair<int, int> > v; �����ϴ� ���
// https://hsdevelopment.tistory.com/151
bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
	return a.second > b.second;
}

int main(int argc, char** argv)
{
	int weight = 0;
	int num = 0;
	int answer = 0;

	vector<pair<int, int> > v;

	cin >> weight;
	cin >> num;

	for (int i = 0; i < num; i++) {
		int metal = 0;
		int price = 0;

		cin >> metal;
		cin >> price;

		v.push_back(pair<int, int>(metal, price));
	}

	// �ι�° ���ڸ� �������� ��������
	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < v.size(); i++){
		int n = v[i].first;	// �ݼ� ����
		int p = v[i].second;	// �ݼ� kg �� ����

		if (weight > n) {
			weight = weight - n;
			answer += n * p;
		}
		else{
			for (int i = 0; i < weight; i++) {
				answer += p;
			}

			break;
		}

	}

	cout << answer << "\n";

	return 0;
}