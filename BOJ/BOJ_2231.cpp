#include <iostream>
#include<cmath>

using namespace std;

int main() {
	int input = 0;
	int num_len = 0;
	bool flag = false;
	int no_answer = 0;

	cin >> input;
	int tmp = input;

	// input�� �� �ڸ� ������ ����
	while (tmp > 0) {
		num_len++;
		tmp /= 10;
	}

	int generator = pow(10, num_len - 2);

	while (generator <= input) {
		//cout << "������ �ĺ� : " << generator << endl;
		// generator�� �� �ڸ� ������ ���ڸ� ���Ѵ�.
		int num = generator;
		int sum = 0;

		while (num != 0)
		{
			int tmp = num % 10;
			sum += tmp;
			//printf("%d \n", tmp);
			num /= 10;
		}

		sum += generator;

		if (sum == input) {
			cout << generator << endl;
			flag = true;
			break;
		}
	
		generator++;
	}

	if (!flag) {
		cout << no_answer << endl;
	}

}