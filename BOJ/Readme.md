## BOJ 알고리즘을 풀면서 느낀 점 & 참고할 점
같은 유형의 알고리즘 문제를 풀 때, 조금 더 효율적으로 풀려고 메모를 해둔다.  
#### [BOJ_10872](https://www.acmicpc.net/problem/10872) - 펙토리얼  
- 시간 측정 및 시간 줄이기용 팁을 배울 수 있었다.  
- 재귀함수를 풀 때 return이 함수로 되는데 그대로 써 두자.  
  그 함수가 나중에 무엇을 의미하는지만 알면 된다.  
  
#### [BOJ_11729](https://www.acmicpc.net/problem/11729) - 하노이 탑 이동 순서
- 재귀함수.. 너무 어렵다... 언제 재귀함수를 써야 하나?
1. 무언가 같은 내용이 반복된다.
2. 일정한 순서대로 반복되는 것이 아닌, 앞의 내용에 영향을 받아서 기준이 달라지며 반복된다.
3. 재귀함수를 의심해본다.
4. 커다란 로직을 최대한 작게 쪼개본다.
5. 최소한으로 쪼개진 단위에 일정한 규칙이 있고, 이 규칙이 큰 단위에도 그대로 적용된다.
6. 최소한의 규칙에 맞게 재귀함수를 짠다.

- 출처 : [백준알고리즘_11729_재귀함수_하노이탑 이동 (C언어)](https://codevang.tistory.com/73)  

#### [BOJ_1436](https://www.acmicpc.net/problem/1436) - 영화감독 숌
- 부루트포스 알고리즘 (완전 탐색)  
- 완전 탐색은 간단하게 생각하면 하나하나 샅샅이 뒤져보는 것이다.  
  그냥 하나하나 조건에 맞게 따져가며 풀어보자.  
  
- 숫자를 입력으로 받고, 각 자리의 수를 구할 때 방법  
1. 나눗셈과 나머지를 이용 + 배열을 이용하면 간편
2. 아예 문자처럼 취급해서 배열로 이용

- 출처 : [숫자의 각 자릿수 구하기 알고리즘](https://www.crocus.co.kr/399)  
          [[알고리즘] 각 자릿수 구하기](https://travelbeeee.tistory.com/4)  

#### [BOJ_2231](https://www.acmicpc.net/problem/2231) - 분해합  
- 소수를 찾는 방법? 절반을 초과하는 숫자는 나올 수 가 없다.  
- 시간 측정의 중요성을 깨닫게 해준 문제, 벡터 예외처리를 잘하자!

#### [BOJ_4948](https://www.acmicpc.net/problem/4948) - 베르트랑 공준
- continue문 잘 알고쓰자...  
- 에라토스테네스의 해
  1. 소수를 판별할 범위만큼 배열 할당
  2. 2부터 시작해서 특정 수의 배수를 모두 지운다.
  3. 2부터 남아 있는 수를 모두 출력
  
- 출처 : [[C++] 소수 구하기 최적의 알고리즘 (2) - 에라토스테네스의 체](https://marobiana.tistory.com/91)  

#### [BOJ 4344](https://www.acmicpc.net/problem/4344) - 평균은 넘겠지  
- 동적할당 배열의 접근법에 대해서 알 수 있는 문제였다..  

#### [BOJ 2839](https://www.acmicpc.net/problem/2839) - 설탕 배달  
- N을 5로 나누고 3으로 나눈다는 흐름은 맞지만 그 순서가 틀려 살짝 해맨 문제  

#### [BOJ_2869](https://www.acmicpc.net/problem/2869) - 달팽이는 올라가고 싶다  
- 숫자를 max로 했을 때 시간초과가 뜰 수 있다.  
- max로 넣었을 때 시간초과가 나는지 안나는지 확인 할 것  
- 함수 하나로 해결 할 수 있다! 규칙을 잘 살펴보자.

#### [BOJ_10814](https://www.acmicpc.net/problem/10814) - 나이순 정렬
- 문제를 보자마자 우선순위 큐로 풀려고 했지만, 구글링을 통해 STL 라이브러리를 사용...  
- 코테에서 처음으로 클래스를 사용하여 푼 문제다.  
- sort()와 stable_sort()의 차이점을 알 수 있는 문제였다.

#### [BOJ_2108](https://www.acmicpc.net/problem/2108) - 통계학
- 벡터와 sort()를 이용해서 풀 수 있었던 문제  
- 최빈값을 구할 때 pair을 이용해서 간단하게 해결할 수 있었다.  
- 출처 : [[STL] vector 벡터 정리 및 예제](https://hyeonstorage.tistory.com/324)  
         [[C++] Pair 클래스 정리 및 예제 (vector, sort)](https://blockdmask.tistory.com/64)  
         [[백준 2108] 통계학 (최빈값, 산술평균, 중앙값, 범위)](https://blockdmask.tistory.com/113)

#### [BOJ_15649](https://www.acmicpc.net/problem/15649) - N과 M (1)  
- 벡트레킹에 대한 첫번째 문제였다.  
- 벡트레킹을 구현하는 방법 중 모든 방법을 탐색하는데 재귀함수를 이용,  
  조건에서 맞지 않는 방법은 탐색하지 않는 방법을 택했다.  
- 이런 생각을 하기까지 많은 시간이 걸렸다.  
- 실제 숫자를 담을 배열과 그 곳을 방문했다는 것을 Check할 배열 2가지를 만드는 것으로 Start!  
- cnt를 증가시켜 재귀함수를 사용하자 -> 무언가가 일정하게 반복된다? 재귀함수!  
- 조건에 맞지 않으면 탐색하지 말자.  
- 출처 : [BOJ 15649. N과 M (1)](https://velog.io/@polynomeer/BOJ-1564957.-N%EA%B3%BC-M-18)  

#### [BOJ_9663](https://www.acmicpc.net/problem/9663) - N-Queen  
- 벡트레킹 = 완전 탐색 + 가지치기  
- 문제에는 2차원 행렬을 이용하는 것처럼 말을 했지만,  
  사실 1차원 행렬로도 충분히 풀 수 있는 문제였다.  
- 이번 문제도 시간이 오래 걸렸다...  
- 출처 : [9663번 N-QUEEN C++ 풀이](https://cryptosalamander.tistory.com/58)  

#### [BOJ_2167](https://www.acmicpc.net/problem/2167) - 2차원 배열의 합  
- 2차원 배열 동적할당에 대한 문제  
- 동적할당을 만들 때 arr[행][열] 이렇게 접근을 하자.  
- **행 - row, 열 - col** : 항상 헷갈린다..  
- 출처 : [How do I declare a 2d array in C++ using new?](https://stackoverflow.com/questions/936687/how-do-i-declare-a-2d-array-in-c-using-new)  

#### [BOJ_10845](https://www.acmicpc.net/problem/10845) - 큐  
- 기본적인 자료구조 Queue를 직접 구현하는 문제  
- C++은 문자열 split을 직접 해주는 함수가 없으므로 구현을 하자.  
- 배열을 이용하여 인덱스를 사용하여 원소에 접근하면 크게 어려운 문제는 아니였다.  
- 참고 : [[C++] string 문자열 나누는 split](https://ssungkang.tistory.com/entry/C-string-%EB%AC%B8%EC%9E%90%EC%97%B4-%EB%82%98%EB%88%84%EB%8A%94-split)  

#### [BOJ_10828](https://www.acmicpc.net/problem/10828) - 스택  
- 앞서 풀어본 큐와 매우 유사한 문제이다.  
- 큐와 스택의 기본적인 차이점에 대해서 알 수 있던 문제였다.  





