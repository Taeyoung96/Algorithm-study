#include <iostream>
#include<utility>	// pair class 사용하기 위해
#include<string>	// string 사용하기 위해
#include<vector>	// vector 사용하기 위해
#include<algorithm> // sort()를 사용하기 위해

using namespace std;

class attendance {
public:
	int age = 0;
	string name = "";
	attendance(int input_age, string intput_name) { age = input_age, name = intput_name; }
};

// compare 함수로 나이만 비교
// sort()를 그냥 쓰면 이름도 알파벳 순으로 정렬됨.
bool compare(attendance a, attendance b) {
	return a.age < b.age;
}

int main() {
	cin.tie(NULL);	// 시간 줄이기용
	ios::sync_with_stdio(false);	// 시간 줄이기용 - 버퍼를 비워준다

	int number = 0;
	cin >> number;
	
	vector<attendance> stablesort;

	for (int i = 0; i < number; i++) {
		int _age = 0;
		string _name = "";
		cin >> _age;
		cin >> _name;
		stablesort.push_back(attendance(_age, _name));
	}

	stable_sort(stablesort.begin(), stablesort.end(),compare);
	// sort는 불완전하므로, 이름의 순서가 보존되지 않는다.
	// 그래서 stable_sort를 써야한다.
	
	vector<attendance>::iterator iter;
	for (int i = 0; i < number; i++) {
		cout << stablesort.at(i).age << " " << stablesort.at(i).name << '\n';
	}
	
}