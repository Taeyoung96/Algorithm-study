#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

int main() {
	clock_t start, end;
	double result = 0;
	int num1 = 0;
	int num2 = 0;
	int nothing = -1;
	bool firstPrimeNumber = false;
	int sumOfPrimeNumber = 0;
	vector<int> primeNumberVec;

	cin >> num1;
	cin >> num2;

	start = clock(); //�ð� ���� ����

	for (int inputNumber = num1; inputNumber < (num2+1); inputNumber++) {
		bool noPrimeNumber = false;
		int div = (inputNumber / 2);

		if (div == 1){		// 2�� ���� ���ڰ� 1�̶��, 2 or 3
			primeNumberVec.push_back(inputNumber);
		}
		else if(div > 1){
			for (int j = 2; j < (div + 1); j++) {	// 2�� ���� ���ڰ� 2�̻� ��� �˻�
				if ((inputNumber % j) == 0) {		// ���� �������� 0�� ������ �Ҽ��� �ƴϴ�
					noPrimeNumber = true;
					break;
				}
			}

			if (noPrimeNumber == false) {
				primeNumberVec.push_back(inputNumber);
			}

		}
		
	}

	if (!primeNumberVec.empty()) {
		for (int i = 0; i < primeNumberVec.size(); i++) {  // ��� �Ҽ��� ��
			sumOfPrimeNumber += primeNumberVec[i];
		}
	}
	
	if (primeNumberVec.empty()) {
		cout << nothing << endl;
	}
	else {
		cout << sumOfPrimeNumber << endl;
		cout << primeNumberVec[0] << endl;
	}

	end = clock(); //�ð� ���� ��
	result = (double)(end - start);
	//printf("%f", result);


}
