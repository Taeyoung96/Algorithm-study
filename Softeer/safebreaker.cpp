#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// vector<pair<int, int> > v; 정렬하는 방법
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

	// 두번째 인자를 기준으로 내림차순
	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < v.size(); i++){
		int n = v[i].first;	// 금속 갯수
		int p = v[i].second;	// 금속 kg 당 가격

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