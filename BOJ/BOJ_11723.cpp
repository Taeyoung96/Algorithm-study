#include <iostream>
#include <string>

using namespace std;

bool set[20] = { 0, };

void add(int num) {
	if (!set[num - 1]) {
		set[num - 1] = true;
	}
}

void remove(int num) {
	if (set[num - 1]) {
		set[num - 1] = false;
	}
}

void check(int num) {
	if (set[num - 1]) {
		cout << 1 << "\n";
	}
	else {
		cout << 0 << "\n";
	}
}

void toggle(int num) {
	if (set[num - 1]) {
		set[num - 1] = false;
	}
	else {
		set[num - 1] = true;
	}
}

void all(){
	for (int i = 0; i < 20; i++) {
		set[i] = true;
	}
}

void empty() {
	for (int i = 0; i < 20; i++) {
		set[i] = false;
	}
}

int main() {
	cin.tie(NULL);	// 시간 줄이기용
	ios::sync_with_stdio(false);	// 시간 줄이기용 - 버퍼를 비워준다
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string input;
		int num;
		cin >> input;
		if (input == "add") {
			cin >> num;
			add(num);
		}
		else if (input == "remove") {
			cin >> num;
			remove(num);
		}
		else if (input == "toggle") {
			cin >> num;
			toggle(num);
		}
		else if (input == "check") {
			cin >> num;
			check(num);
		}
		else if (input == "all") {
			all();
		}
		else if (input == "empty") {
			empty();
		}
		
	}

	return 0;
}