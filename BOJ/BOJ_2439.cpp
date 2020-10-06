#include <iostream>

using namespace std;

int main() {
	int num = 0;
	cin >> num;

	for (int i = num; i > 0; i--) {
		for (int j = 1; j < num+1; j++) {
			if (i <= j) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
}