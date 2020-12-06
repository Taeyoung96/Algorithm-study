#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>	// 반올림을 하기 위해서
#include<utility>	// pair class 사용하기 위해

using namespace std;

//sort 기준 
bool comp(const pair<int, int> &p1, const pair<int, int> &p2) {

	if (p1.second == p2.second) {     //빈도수가 같으면 
		return p1.first < p2.first; //숫자(key)작은게 앞으로 
	}
	return p1.second > p2.second;    //다르면 빈도수가 큰게 앞으로 
}

int main() {
	cin.tie(NULL);	// 시간 줄이기용
	ios::sync_with_stdio(false);	// 시간 줄이기용 - 버퍼를 비워준다

	int n = 0;
	double avg = 0.0;
	int min = 4001;
	int max = -4001;
	int half = 0;

	vector<int> num;
	vector<pair<int, int>> freq;
	
	cin >> n;
	
	// n만큼 돌면서 수 입력
	for (int i = 0; i < n; i++) {
		int input = 0;
		cin >> input;

		avg += input;

		num.push_back(input);	// 벡터 원소 안으로 push

		if (i == 0) {	// 첫번재 들어원 원소로 초기화
			min = input;
			max = input;
		}
		else {	// 수 비교하며 최댓값, 최소값 초기화
			if (input > max) {
				max = input;
			}
			if (input < min) {
				min = input;
			}
		}
		
	}

	avg = avg / n;	// 산술 평균 구하기

	half = n / 2;	// 중앙 값에 해당하는 index
	sort(num.begin(), num.end());	// 수 정렬

	// 최빈값 구하기
	for (int i = 0; i < num.size(); i++) {
		if (freq.empty()) {
			freq.push_back(pair<int,int>(num.at(i), 1));
			continue;	// 아래 코드를 수행하지 않고 건너 뜀.
		}

		if (freq.back().first == num.at(i)) {	// 만약 같은 것이 있다면
			pair<int, int> tmp = freq.back();
			tmp.second++;	// 빈도수 하나 늘리기
			freq.pop_back();	// 기존 것 pop
			freq.push_back(tmp);
		}
		else {
			freq.push_back(pair<int, int>(num.at(i), 1));
		}

	}

	//빈도수가 높고, 숫자(key)가 낮은 순으로 정렬 
	sort(freq.begin(), freq.end(), comp);

	cout << round(avg) << "\n";

	cout << num.at(half) << "\n";

	if (freq.size() == 1) {	// 만약 원소의 갯수가 1이라면
		cout << freq[0].first << "\n";	// 그대로 출력
	}
	else {	// 원소의 갯수가 2개 이상이면
		if (freq[0].second == freq[1].second) {	// 비교해서 출력
			cout << freq[1].first << "\n";
		}
		else {
			cout << freq[0].first << "\n";
		}
	}

	cout << max - min << "\n";
}