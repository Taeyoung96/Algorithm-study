#include <iostream>
#include <time.h>
#include <vector>

#define SIZE 246913

using namespace std;

int main() {
	clock_t start, end;
	double result = 0;
	vector<int> input;
	
	start = clock(); //시간 측정 시작

	while (true) {		// input 받는것 사실 이렇게 말고 받자 마자 소수의 갯수를 구하는게 더 빠름
		int tmp = 0;
		cin >> tmp;
		input.push_back(tmp);
		if (input.back() == 0) {
			input.pop_back();
			break;
		}
	}

	// 1. input 숫자 하나를 꺼내서 그 수를 이용하여 범위를 지정
	// i<x<=2*i
	for (int i = 0; i < input.size(); i++) {
		int number = input[i];
		int max = 2 * number;
		int cnt = 0;
		int primeNumberSelect[SIZE] = { 0, }; // 최대로 들어올 수 있는 숫자가 246912이므로

		// 배열 초기화
		for (int j = (number + 1); j <= max; j++) {
			primeNumberSelect[j] = j;
		}
		
		// 2부터 시작해서 특정 수의 해당하는 배수를 모두 지운다.
		for (int j = 2; (j*j)<= max; j++) {
			for (int xsample = (j*j); xsample < (max + 1); xsample += j) {	// 지울때 그 배수부터 가능한 숫자 모두 0으로
				primeNumberSelect[xsample] = 0;
			}
	
			if (primeNumberSelect[j] == 0) {	// 이미 0이면 Pass - 아 이거 뒤로 안보내서 계속 for문을 건너 뛰었다..
				continue;
			}
		}
		
		// 소수의 갯수
		for (int j = (number + 1); j <= max; j++) {
			if (!(primeNumberSelect[j] == 0)) {
				cnt++;
				
			}
		}

		cout << cnt << '\n';
	}


	end = clock(); //시간 측정 끝
	result = (double)(end - start);
	//printf("%f", result);

	return 0;

}

