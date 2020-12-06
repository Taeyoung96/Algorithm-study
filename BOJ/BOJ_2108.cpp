#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>	// �ݿø��� �ϱ� ���ؼ�
#include<utility>	// pair class ����ϱ� ����

using namespace std;

//sort ���� 
bool comp(const pair<int, int> &p1, const pair<int, int> &p2) {

	if (p1.second == p2.second) {     //�󵵼��� ������ 
		return p1.first < p2.first; //����(key)������ ������ 
	}
	return p1.second > p2.second;    //�ٸ��� �󵵼��� ū�� ������ 
}

int main() {
	cin.tie(NULL);	// �ð� ���̱��
	ios::sync_with_stdio(false);	// �ð� ���̱�� - ���۸� ����ش�

	int n = 0;
	double avg = 0.0;
	int min = 4001;
	int max = -4001;
	int half = 0;

	vector<int> num;
	vector<pair<int, int>> freq;
	
	cin >> n;
	
	// n��ŭ ���鼭 �� �Է�
	for (int i = 0; i < n; i++) {
		int input = 0;
		cin >> input;

		avg += input;

		num.push_back(input);	// ���� ���� ������ push

		if (i == 0) {	// ù���� ���� ���ҷ� �ʱ�ȭ
			min = input;
			max = input;
		}
		else {	// �� ���ϸ� �ִ�, �ּҰ� �ʱ�ȭ
			if (input > max) {
				max = input;
			}
			if (input < min) {
				min = input;
			}
		}
		
	}

	avg = avg / n;	// ��� ��� ���ϱ�

	half = n / 2;	// �߾� ���� �ش��ϴ� index
	sort(num.begin(), num.end());	// �� ����

	// �ֺ� ���ϱ�
	for (int i = 0; i < num.size(); i++) {
		if (freq.empty()) {
			freq.push_back(pair<int,int>(num.at(i), 1));
			continue;	// �Ʒ� �ڵ带 �������� �ʰ� �ǳ� ��.
		}

		if (freq.back().first == num.at(i)) {	// ���� ���� ���� �ִٸ�
			pair<int, int> tmp = freq.back();
			tmp.second++;	// �󵵼� �ϳ� �ø���
			freq.pop_back();	// ���� �� pop
			freq.push_back(tmp);
		}
		else {
			freq.push_back(pair<int, int>(num.at(i), 1));
		}

	}

	//�󵵼��� ����, ����(key)�� ���� ������ ���� 
	sort(freq.begin(), freq.end(), comp);

	cout << round(avg) << "\n";

	cout << num.at(half) << "\n";

	if (freq.size() == 1) {	// ���� ������ ������ 1�̶��
		cout << freq[0].first << "\n";	// �״�� ���
	}
	else {	// ������ ������ 2�� �̻��̸�
		if (freq[0].second == freq[1].second) {	// ���ؼ� ���
			cout << freq[1].first << "\n";
		}
		else {
			cout << freq[0].first << "\n";
		}
	}

	cout << max - min << "\n";
}