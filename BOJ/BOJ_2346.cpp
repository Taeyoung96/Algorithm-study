#include <iostream>
#include <deque>

using namespace std;

deque<pair<int, int>> balloon;	// 풍선의 순서와 종이에 적혀있는 숫자를 저장
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

	
	while (!(balloon.size() == 1)) {	// 모든 풍선이 하나 남을 때까지 수행
		int target = 0, pos = 0, answer = 0;

		answer = balloon.front().first;
		target = balloon.front().second;
		
		cout << answer << " ";
		
		tmp = balloon.front();
		balloon.pop_front();
		
		
		if (target > 0) {	// 종이 안에 숫자가 양수일 때

			// target 만큼 ballon이 시계방향으로 돌 수 있도록 하기
			while (++pos < target) {
				tmp = balloon.front();
				balloon.pop_front();
				balloon.push_back(tmp);
			}

		}
		else {	// 종이 안에 숫자가 음수일 때

			// target 만큼 ballon이 반시계방향으로 돌 수 있도록 하기
			while (pos-- > target) {
				tmp = balloon.back();
				balloon.pop_back();
				balloon.push_front(tmp);
			}
		}
	}

	cout << balloon.front().first << endl;	// 마지막 풍선 번호 출력

	
}