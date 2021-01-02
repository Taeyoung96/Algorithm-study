#include <iostream>
#include <string>
#include<vector>
#include<sstream>  // 문자열 공백을 자르는데 필요

using namespace std;

int arr[10001] = { 0, };

vector<string> split(string str, char delimiter); // 문자열 자르기

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
	if (!arr[0] == 0) {	// 원소가 하나라도 있으면
		return arr[0];	
	}

	return -1;
}

int empty() {
	for (int i = 0; i < 10000; i++) {
		if (!(arr[i] == 0)) {	// 원소가 하나라도 있으면
			return 0;	// 0을 반환
		}
	}
	return 1;	// 아니면 1을 반환
}

int size() {
	int cnt = 0;
	for (int i = 0; i < 10000; i++) {
		if (!(arr[i] == 0)) {	// 원소가 0이 아닐 경우
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
	while (getchar() != '\n') {}	// 공백 문자 제거
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
		else {	// input이 push일 때
			vector<string> result = split(input, ' ');
			int num = stoi(result[1]);
			push(num);
			//print();
		}
	}
}

// 문자열 자르기 함수 구현
vector<string> split(string input, char delimiter) {
	vector<string> answer;
	stringstream ss(input);
	string temp;

	while (getline(ss, temp, delimiter)) {
		answer.push_back(temp);
	}

	return answer;
}