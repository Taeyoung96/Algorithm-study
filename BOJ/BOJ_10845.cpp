#include <iostream>
#include <string>
#include<vector>
#include<sstream>  // ���ڿ� ������ �ڸ��µ� �ʿ�

using namespace std;

int arr[10001] = { 0, };

vector<string> split(string str, char delimiter); // ���ڿ� �ڸ���

void push(int x) {
	for (int i = 0; i < 10000; i++) {
		int tmp = arr[i];
		if (arr[i] == 0) {
			arr[i] = x;
			break;
		}
	}
}

int pop() {
	if (!(arr[0] == 0)) {
		int tmp = arr[0];
		for (int i = 1; i < 10000; i++) {
			arr[i - 1] = arr[i];
		}
		return tmp;
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

int front() {
	if (!(arr[0] == 0)) {
		return arr[0];	// ���� �տ� �ִ� ����
	}
	return -1;
}

int back() {
	if (!(arr[0] == 0)) {
		for (int i = 0; i < 10000; i++) {
			if (arr[i] == 0) {
				return arr[i - 1];	// ���� �ڿ� �ִ� ��ȿ�� ����
			}
		}
	}
	return -1;
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
		getline(cin, input);	// ��ɾ� �ޱ�
		
		if (input == "pop") {
			cout << pop() << endl;	// pop �Լ�
			//print();
		}
		else if (input == "size") {
			cout << size() << endl;	// size �Լ�
		}
		else if (input == "empty") {
			cout << empty() << endl; // empty �Լ�
		}
		else if (input == "front") {
			cout << front() << endl;	// front �Լ�
		}
		else if (input == "back") {
			cout << back() << endl;	// back �Լ�
		}
		else {	// push �Լ�
			vector<string> result = split(input, ' ');	// ������ �̿��Ͽ� split
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