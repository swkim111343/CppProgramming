 ## C++ 챕터 5-2
1. 참조에 의한 호출과 주소에 의한 호출의 차이점을 설명하라.
>참조에 의한 호출
 - 변수의 별명(참조자) 을 함수에 전달하는 방식
 - 함수 안에서 원본 변수를 직접 사용함
 - C++에서는 & 사용

   <br>
   >주소에 의한 호출
 - 변수의 메모리 주소(pointer) 를 전달하는 방식
 - 함수에서 포인터를 통해 원본에 접근함
 - *, & 연산자를 사용

>참조에 의한 호출
<pre>
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
</pre>

>주소에 의한 호출
<pre>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
</pre>
<br>
2. 참조에 의한 호출의 장점은 무엇인가?
 - 원본 데이터 수정 가능
 - 코드 비용 감소
 - 코드가 간단하고 가독성이 좋음
 
-------------------------
## 실습과제 2 출력결과
<img width="311" height="105" alt="스크린샷 2026-05-09 132223" src="https://github.com/user-attachments/assets/d83afff1-d662-4225-8dc5-5596e17cb49b" />

-------------------------
## 실습과제 3 출력결과
<img width="400" height="149" alt="스크린샷 2026-05-09 132328" src="https://github.com/user-attachments/assets/e8f8b203-ec3d-4fbb-bc5d-f76e753a05a1" />

-------------------------
## 실습과제 4 출력결과
<img width="405" height="129" alt="스크린샷 2026-05-09 132449" src="https://github.com/user-attachments/assets/84df8159-887f-48a9-8dd2-7f5eec801508" />

