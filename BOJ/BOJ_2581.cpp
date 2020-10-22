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

	start = clock(); //시간 측정 시작

	for (int inputNumber = num1; inputNumber < (num2+1); inputNumber++) {
		bool noPrimeNumber = false;
		int div = (inputNumber / 2);

		if (div == 1){		// 2로 나눈 숫자가 1이라면, 2 or 3
			primeNumberVec.push_back(inputNumber);
		}
		else if(div > 1){
			for (int j = 2; j < (div + 1); j++) {	// 2로 나눈 숫자가 2이상 모두 검사
				if ((inputNumber % j) == 0) {		// 만약 나머지가 0이 나오면 소수가 아니다
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
		for (int i = 0; i < primeNumberVec.size(); i++) {  // 모든 소수의 합
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

	end = clock(); //시간 측정 끝
	result = (double)(end - start);
	//printf("%f", result);


}
