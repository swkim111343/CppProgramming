## C++ 챕터 6-2
## 실습과제1

1. static 멤버변수는 클래스 선언부에 선언하고 외부에서 다시 선언하는 이유를 설명하라. 
    - static 멤버변수는 객체마다 따로 생성되는 변수가 아니라 클래스 전체에서 하나만 공유되는 변수이다.
    - 따라서 클래스 내부에서의 선언은 선언 역할만 한다.
    - 하지만 실제 메모리를 할당하려면 클래스 외부에서 한 번 더 정의해야 한다.
    - 왜냐하면 static 멤버변수는 객체 생성 시 만들어지는 것이 아니라
    - 프로그램 전체에서 하나만 존재해야 하므로 별도의 저장공간이 필요하기 때문이다.

2. static 멤버함수의 클래스 구현부에 static 키워드를 붙이 면 안되는 이유를 설명하라
    - 클래스 내부의 static -> 객체 없이 클래스 이름으로 호출 가능한 멤버함수 의미
    - 클래스 외부의 static -> 해당 소스파일 내부에서만 사용 가능한 함수 의미
    - 그러므로 구현부에 다시 static을 붙이면 문법적으로 맞지 않는다.


---------
## 실습과제 2 출력결과
<img width="409" height="124" alt="스크린샷 2026-05-21 204626" src="https://github.com/user-attachments/assets/7f7e2723-6ead-4477-9519-22cf90993f40" />

---------
## 실습과제 3 출력결과
<img width="400" height="105" alt="스크린샷 2026-05-21 204919" src="https://github.com/user-attachments/assets/dd23a3ff-3b8a-4f28-a990-cede1cde02d2" />

---------
## 실습과제4 p.323 5번 출력결과
<img width="395" height="130" alt="스크린샷 2026-05-21 205134" src="https://github.com/user-attachments/assets/d1309f26-ce0d-4c96-8d0b-3291fb865745" />

---------
## 실습과제4 p.323 8번 출력결과
<img width="383" height="101" alt="스크린샷 2026-05-21 205514" src="https://github.com/user-attachments/assets/b485189d-2b1f-4f96-9cf5-be7d57e7b48d" />

---------
## 실습과제4 p.323 10번 출력결과
<img width="872" height="462" alt="스크린샷 2026-05-21 205804" src="https://github.com/user-attachments/assets/2377862c-df6d-4d4e-8056-31c4445aa634" />
