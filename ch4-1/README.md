## C++ 챕터 4-1 실습과제 1
1. 배열명의 의미를 설명하라. 
    - 배열의 첫 번째 원소의 주소

2. 객체 포인터의 의미를 설명하라. 
    - 객체(변수)의 주소를 저장하는 포인터

3. 포인터를 이용하여 배열 각 원소의 주소를 구하는 방법을 설명 하라 
    - 배열명 자체가 주소니까, 인덱스만 더하면 됨
    - arr + i
    - (예시)
    
<pre>int arr[3] = {10, 20, 30};

arr + 0  // &arr[0]
arr + 1  // &arr[1]
arr + 2  // &arr[2]</pre>

4. 포인터를 이용하여 배열 각 원소의 값을 구하는 방법을 설명하라
    - *(arr + i)
    - *(arr + 0) // 10
    - *(arr + 1) // 20
    - *(arr + 2) // 30

-------------------------
## 실습과제 2 출력결과
<img width="259" height="84" alt="스크린샷 2026-04-02 200149" src="https://github.com/user-attachments/assets/0afc6a55-387f-4773-b34b-45a831577fb9" />

-------------------------
## 실습과제 3 출력결과
<img width="255" height="130" alt="스크린샷 2026-04-02 200238" src="https://github.com/user-attachments/assets/25e25ec4-c6af-45ed-8492-8455114d8c4a" />

-------------------------
## 실습과제 4 출력결과
<img width="321" height="277" alt="스크린샷 2026-04-02 200325" src="https://github.com/user-attachments/assets/ed53a306-f8f2-4afb-af56-9dc33e183bdc" />

-------------------------
## 실습과제 5 출력결과
<img width="386" height="575" alt="스크린샷 2026-04-02 200516" src="https://github.com/user-attachments/assets/fc55f3b6-feaa-45f7-a165-8482c37d7c3e" />


