#include <iostream>
#include<utility>	// pair class ����ϱ� ����
#include<string>	// string ����ϱ� ����
#include<vector>	// vector ����ϱ� ����
#include<algorithm> // sort()�� ����ϱ� ����

using namespace std;

class attendance {
public:
	int age = 0;
	string name = "";
	attendance(int input_age, string intput_name) { age = input_age, name = intput_name; }
};

// compare �Լ��� ���̸� ��
// sort()�� �׳� ���� �̸��� ���ĺ� ������ ���ĵ�.
bool compare(attendance a, attendance b) {
	return a.age < b.age;
}

int main() {
	cin.tie(NULL);	// �ð� ���̱��
	ios::sync_with_stdio(false);	// �ð� ���̱�� - ���۸� ����ش�

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
	// sort�� �ҿ����ϹǷ�, �̸��� ������ �������� �ʴ´�.
	// �׷��� stable_sort�� ����Ѵ�.
	
	vector<attendance>::iterator iter;
	for (int i = 0; i < number; i++) {
		cout << stablesort.at(i).age << " " << stablesort.at(i).name << '\n';
	}
	
}