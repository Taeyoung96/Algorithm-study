#include <iostream>
#include <deque>

using namespace std;

deque<pair<int, int>> balloon;	// ǳ���� ������ ���̿� �����ִ� ���ڸ� ����
pair<int, int> tmp;

int main()
{
	int cnt = 0;
	cin >> cnt;
	for (int i = 1; i <= cnt; i++) {
		int number = 0;
		cin >> number;
		tmp = make_pair(i, number);
		balloon.push_back(tmp);
	}

	
	while (!(balloon.size() == 1)) {	// ��� ǳ���� �ϳ� ���� ������ ����
		int target = 0, pos = 0, answer = 0;

		answer = balloon.front().first;
		target = balloon.front().second;
		
		cout << answer << " ";
		
		tmp = balloon.front();
		balloon.pop_front();
		
		
		if (target > 0) {	// ���� �ȿ� ���ڰ� ����� ��

			// target ��ŭ ballon�� �ð�������� �� �� �ֵ��� �ϱ�
			while (++pos < target) {
				tmp = balloon.front();
				balloon.pop_front();
				balloon.push_back(tmp);
			}

		}
		else {	// ���� �ȿ� ���ڰ� ������ ��

			// target ��ŭ ballon�� �ݽð�������� �� �� �ֵ��� �ϱ�
			while (pos-- > target) {
				tmp = balloon.back();
				balloon.pop_back();
				balloon.push_front(tmp);
			}
		}
	}

	cout << balloon.front().first << endl;	// ������ ǳ�� ��ȣ ���

	
}