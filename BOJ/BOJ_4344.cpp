#include <iostream>

using namespace std;

int main() {

	int case_cnt = 0;         
	cin >> case_cnt;                // �׽�Ʈ ���̽��� ���� �Է�

	//case_cnt�� ���� Ȯ��
	if ((case_cnt > 1001) || (case_cnt < 1)) {
		while (true) {
			cout << "Out of range! Please enter another number (1<=N<=1000)" << endl;
			cin >> case_cnt;

			if ((case_cnt <= 1000) && (case_cnt >= 1)) {
				break;
			}
		}
	}

	// test case�� ���� ��ŭ�� ������ �迭 ����
	int **mat = new int*[case_cnt];
	int *length_arr = new int[case_cnt];  ////�� �ึ�� �ٸ��� ���̸� �������ֱ� ���ؼ�
	int student_length = 0;
	
	for (int col = 0; col < case_cnt; col++) {
		
		cin >> student_length;
		length_arr[col] = student_length;
		mat[col] = new int[student_length];  // �л� �� ��ŭ ���� �Ҵ� �迭 ����

		for (int row = 0; row < student_length; row++) {
			cin >> mat[col][row];            // �л����� ���� �Է�
		}

	}

	for (int i = 0; i < case_cnt; i++) {
		int std = length_arr[i];
		float avg_sum = 0.;
		float avg = 0.;
		int cnt = 0;
		float result = 0.;

		for (int j = 0; j < std; j++) {  //��� ���ϱ�
			avg_sum += mat[i][j];
		}
		avg = avg_sum / std;
		
		for (int j = 0; j < std; j++) {  //����� �Ѵ� ģ���� count
			if (mat[i][j] > avg) {
				cnt += 1;
			}
		}

		result = ((float)cnt / (float)std) * 100;
		cout << fixed;
		cout.precision(3);
		
		cout << result <<"%"<<endl;   //��� ���
		
	}
	

	/* �޸� ���� */ 
	for (int i = 0; i < case_cnt; ++i) {
		delete[] mat[i]; 
	} 

	delete[] mat;  
	delete[] length_arr;
}