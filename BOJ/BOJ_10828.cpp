#include <iostream>
#include <string>
#include<vector>
#include<sstream>  // ���ڿ� ������ �ڸ��µ� �ʿ�

using namespace std;

int arr[10001] = { 0, };

vector<string> split(string str, char delimiter); // ���ڿ� �ڸ���

void push(int num) {
	for (int i = 10000; i >= 1; i--) {
		arr[i] = arr[i - 1];
	}
	arr[0] = num;
}

int pop() {
	if (arr[0] != 0) {
		int tmp = arr[0];
		for (int i = 1; i <= 10000; i++) {
			arr[i-1] = arr[i];
		}
		return tmp;
	}

	return -1;
}

int top() {
	if (!arr[0] == 0) {	// ���Ұ� �ϳ��� ������
		return arr[0];	
	}

	return -1;
}

int empty() {
	for (int i = 0; i < 10000; i++) {
		if (!(arr[i] == 0)) {	// ���Ұ� �ϳ��� ������
			return 0;	// 0�� ��ȯ
		}
	}
	return 1;	// �ƴϸ� 1�� ��ȯ
}

int size() {
	int cnt = 0;
	for (int i = 0; i < 10000; i++) {
		if (!(arr[i] == 0)) {	// ���Ұ� 0�� �ƴ� ���
			cnt += 1;	// count + 1
		}
	}
	return cnt;
}

void print() {
	cout << "-------------" << endl;
	for (int i = 0; i < 10000; i++) {
		if (!(arr[i] == 0)) {
			cout << arr[i] << ",";
		}
	}
	cout << endl;
	cout << "------------" << endl;
}

int main()
{
	int cnt = 0;
	cin >> cnt;
	while (getchar() != '\n') {}	// ���� ���� ����
	for (int i = 0; i < cnt; i++) {
		string input;
		getline(cin, input);
		
		if (input == "pop") {
			cout << pop() << endl;
			//print();
		}
		else if (input == "size") {
			cout << size() << '\n';
		}
		else if (input == "empty") {
			cout << empty() << '\n';
		}
		else if (input == "top") {
			cout << top() << endl;
		}
		else {	// input�� push�� ��
			vector<string> result = split(input, ' ');
			int num = stoi(result[1]);
			push(num);
			//print();
		}
	}
}

// ���ڿ� �ڸ��� �Լ� ����
vector<string> split(string input, char delimiter) {
	vector<string> answer;
	stringstream ss(input);
	string temp;

	while (getline(ss, temp, delimiter)) {
		answer.push_back(temp);
	}

	return answer;
}