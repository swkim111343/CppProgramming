## C++ 챕터 3-1 실습과제 1
1. 구조체와 클래스의 차이점을 설명하라. 
    - 기본 접근 지정자가 다르다.(구조체는 public, 클래스는 private)(공개 데이터 중심 VS 캡슐화 중심)
    - 구조체는 데이터를 묶을때, 클래스는 객체지향을 설계할때 

2. 클래스와 객체의 차이점을 설명하라. 
    - 클래스는 사용자 정의 자료형(객체를 만들기 위한 틀)
    - 객체는 클래스를 기반으로 설계된 인스턴스

3. sizeof(클래스명)의 결과값을 출력해보고 결과를 설명하라.
    - 아래의 코드를 실행 했을때 결과값은->8
    - 이유는 cpu가 메모리 정렬을 하려고 빈공간을 패딩하기 때문이다. int a는 4바이트 char b는 1바이트 인데 int 자료형이 가장 큰 4바이트 이기 때문에 int를 기준으로 메모리 정렬한다. char b를 1로 하면 5바이트 인데 그렇게 되면 비효율적이다.
<pre>#include <iostream>
using namespace std;

class classname {
    int a;
    char b;
};

int main() {
    cout << sizeof(classname);
}</pre>
-----------------------------------
## 실습과제2 실행결과
<img width="499" height="186" alt="스크린샷 2026-03-17 191729" src="https://github.com/user-attachments/assets/6ee03bd7-17ea-44ff-ad1d-12e604c53c4d" />

-----------------------------------
## 실습과제3 실행결과
<img width="483" height="195" alt="스크린샷 2026-03-17 191744" src="https://github.com/user-attachments/assets/b8e19320-e20d-40f0-9432-2876b445bffe" />

-----------------------------------
## 실습과제4 실행결과
<img width="538" height="249" alt="스크린샷 2026-03-17 191758" src="https://github.com/user-attachments/assets/a45ed6f1-0c1c-4389-bc28-c38c58b466f7" />

-----------------------------------
## 실습과제5 실행결과
https://github.com/user-attachments/assets/49c5851c-3367-4355-9ea0-da0c0414479a


