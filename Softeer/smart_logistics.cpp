#include <iostream>
#include <string>

using namespace std;

bool available[20001] = {false};

int main(int argc, char** argv)
{
	int n,k;
	int cnt = 0;

	cin >> n;
	cin >> k;

	string input;
	cin >> input;

	// �����ΰ� true�� �ٲ�
	for (int i = 0; i < input.size(); i++) {
		if (input[i] == 'H') {
			available[i] = true;
		}
	}

	// �κ��� �� �ɸ��� �� �� �� �˻�
	// �� ���ʺ��� ���� ������ false�� �ٲٰ� ��������
	for (int i = 0; i < input.size(); i++) {
		if (input[i] == 'P') {
			for (int j = i - k; j <= i + k; j++) {
				// ����϶��� �˻�
				if (j >= 0) {
					if (available[j] == true) {
						available[j] = false;
						cnt++;
						break;
					}
				}
			}
		}
	}

	cout << cnt << "\n";

	return 0;
}