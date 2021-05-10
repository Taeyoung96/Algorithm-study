## Softeer 문제 풀면서 느낀 점 & 참고할 점
같은 유형의 알고리즘 문제를 풀 때, 조금 더 효율적으로 풀려고 메모를 해둔다.  

#### [바이러스](https://softeer.ai/practice/info.do?eventIdx=1&psProblemId=407) - Lv 2  
- 제출 답안 : [virus.cpp](https://github.com/Taeyoung96/Algorithm-study/blob/main/Softeer/virus.cpp)  
- 처음에 큰 수를 다뤄야 해서 log를 이용해 보는 것으로 접근해봤지만 실패  
- 나머지를 다룰 때, 약간의 trick을 배울 수 있었다.  
- 두 곱의 나머지를 구할 때, 각각의 나머지를 구한 후 두 수를 곱하면 두 곱의 나머지를 쉽게 구할 수 있다.  
- 변수의 범위를 꼭 생각해주자.  

#### [성적 평균](https://softeer.ai/practice/info.do?eventIdx=1&psProblemId=389) - Lv 3  
- 제출 답안 : [grade_average.cpp](https://github.com/Taeyoung96/Algorithm-study/blob/main/Softeer/grade_average.cpp)  
- 생각보다 시간이 너무 많이 걸렸다...  
- 처음에 incremental average를 이용하려 풀려고 했는데 실패...  
- 반올림을 일부러 해줬는데 통과하지 못했다.  
- 부분합을 이용하여 배열에 저장하면 쉽게 풀 수 있다.  
- static cast 쓰는 법도 알아두자.  
- 출처 : [[C++] static_cast (타입캐스트 연산자)](https://blockdmask.tistory.com/236)  
         
#### [지도 자동 구축](https://softeer.ai/practice/info.do?eventIdx=1&psProblemId=413) - Lv 2  
- 제출 답안 : [map_making.cpp](https://github.com/Taeyoung96/Algorithm-study/blob/main/Softeer/map_making.cpp)  
- 규칙을 찾는다면 쉽게 풀 수 있는 문제였다.  
- 여기서도 숫자의 범위를 주의해야 한다.  


#### [스마트 물류](https://softeer.ai/practice/info.do?eventIdx=1&psProblemId=414) - Lv 3  
- 제출 답안 : [smart_logistics.cpp](https://github.com/Taeyoung96/Algorithm-study/blob/main/Softeer/smart_logistics.cpp)  
- 플래그(bool 배열)를 이용하여 풀 수 있었던 문제  
- 로봇이 집을 수 있는 최대한 멀리 있는 것을 집고, 왼쪽부터 순서대로 집는다는 가정을 했는데 그 가정이 맞았던 것 같다.  

#### [8단 변속기](https://softeer.ai/practice/info.do?eventIdx=1&psProblemId=408) - Lv 2  
- 제출 답안 : [transmission.cpp](https://github.com/Taeyoung96/Algorithm-study/blob/main/Softeer/transmission.cpp)  
- 단순하게 생각했는데, 정말 그 방법이 맞았던 문제  
- 일단 생각나는데로 코딩을 해보자.  

