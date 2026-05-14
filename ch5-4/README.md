<img width="498" height="206" alt="스크린샷 2026-05-14 221447" src="https://github.com/user-attachments/assets/99267559-ce1d-4010-aa12-17dc1fb8f3f7" />## C++ 챕터 5-4
## 실습과제1
1. 일반생성자와 복사생성자의 차이는?
    - 일반 생성자 (constructor) : 객체를 처음 생성할 때 초기화하는 함수, 보통 매개변수를 받아서 멤버 변수 초기화
    - 복사 생성자 (copy constructor) : 이미 존재하는 객체를 복사해서 새로운 객체 생성 

2. 대입연산과 얕은 복사생성자의 차이는 무엇인가?
    - 대입 연산 (assignment operator) : 이미 존재하는 객체에 값을 덮어씀
    - 얕은 복사 생성자 (shallow copy constructor) : 포인터 같은 경우 주소만 복사

| 구분 | 대입 연산 (Assignment Operator) | 얕은 복사 생성자 (Shallow Copy Constructor) |
|------|--------------------------------|--------------------------------------------|
| 시점 | 이미 객체가 존재하는 상태 | 객체를 새로 생성하는 시점 |
| 대상 | 기존 객체의 내용을 덮어씀 | 새로운 객체를 생성하며 복사 |
| 메모리 처리 | 기존 자원 해제 여부 고려 필요 | 단순히 주소값만 복사 |
| 특징 | `a = b;` 형태로 사용 | `A b = a;` 형태로 사용 |
| 위험성 | self-assignment 문제 가능 | double free(이중 해제) 문제 가능 |


3. 지금까지 배운 내용기준으로 컴파일러가 자동으로 추가
하는 멤버함수는 어떤 것이 있는가?(4가지)
    - 기본 생성자 (default constructor)
    - 복사 생성자 (copy constructor)
    - 소멸자 (destructor)
    - 대입 연산자 (assignment operator)

---------------------------
## 실습과제2 출력결과
<img width="498" height="206" alt="스크린샷 2026-05-14 221447" src="https://github.com/user-attachments/assets/1fd7165c-d900-49fa-9280-9efbaa02c0bb" />

---------------------------
## 실습과제3 출력결과
<img width="351" height="115" alt="스크린샷 2026-05-14 221713" src="https://github.com/user-attachments/assets/d3e78b4a-a305-4de8-b4b7-80a48e1127b6" />

---------------------------
## 실습과제4 출력결과
<img width="349" height="106" alt="스크린샷 2026-05-14 222914" src="https://github.com/user-attachments/assets/b3892a0b-ab21-48cc-b12b-25463a1a6642" />
