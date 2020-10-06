#include <iostream>

using namespace std;

int main() {

	int case_cnt = 0;         
	cin >> case_cnt;                // 테스트 케이스의 수를 입력

	//case_cnt의 범위 확인
	if ((case_cnt > 1001) || (case_cnt < 1)) {
		while (true) {
			cout << "Out of range! Please enter another number (1<=N<=1000)" << endl;
			cin >> case_cnt;

			if ((case_cnt <= 1000) && (case_cnt >= 1)) {
				break;
			}
		}
	}

	// test case가 세로 만큼의 이차원 배열 생성
	int **mat = new int*[case_cnt];
	int *length_arr = new int[case_cnt];  ////각 행마다 다르게 길이를 설정해주기 위해서
	int student_length = 0;
	
	for (int col = 0; col < case_cnt; col++) {
		
		cin >> student_length;
		length_arr[col] = student_length;
		mat[col] = new int[student_length];  // 학생 수 만큼 동적 할당 배열 생성

		for (int row = 0; row < student_length; row++) {
			cin >> mat[col][row];            // 학생들의 점수 입력
		}

	}

	for (int i = 0; i < case_cnt; i++) {
		int std = length_arr[i];
		float avg_sum = 0.;
		float avg = 0.;
		int cnt = 0;
		float result = 0.;

		for (int j = 0; j < std; j++) {  //평균 구하기
			avg_sum += mat[i][j];
		}
		avg = avg_sum / std;
		
		for (int j = 0; j < std; j++) {  //평균이 넘는 친구들 count
			if (mat[i][j] > avg) {
				cnt += 1;
			}
		}

		result = ((float)cnt / (float)std) * 100;
		cout << fixed;
		cout.precision(3);
		
		cout << result <<"%"<<endl;   //결과 출력
		
	}
	

	/* 메모리 해제 */ 
	for (int i = 0; i < case_cnt; ++i) {
		delete[] mat[i]; 
	} 

	delete[] mat;  
	delete[] length_arr;
}