 ## C++ 챕터 5-3
 1. 참조에 의한 호출의 장점을 2가지 측면(메모리사용량, 처리시간)에 서 설명하시오
    - 메모리 사용량 측면 : 값에 의한 호출(Call by Value)은 함수 호출 시 인자의 복사본을 새로 생성한다.
    - 함수 실행 : 함수가 호출되면 지역 변수와 매개변수가 스택 메모리에 생성된다.

 2. C++언어 함수의 반환과정을 상세히 설명하라 
    - 1. 함수 실행
    - 2. return문 실행
    - 3. 함수 종료
    - 4. 호출한 위치로 복귀

 3. 반환형이 참조로 선언된 경우 반환값의 의미를 설명하라 
    - 함수가 값의 복사본을 반환하는 것이 아니라 변수 자체를 반환한다는 뜻이다.
>기본형태
<pre>
int& func();
</pre>
    
 4. 참조 리턴을 응용하는 예제를 인터넷에서 검색하여 실행해보고 설명하시오
<pre>
#include <iostream>
#include <string>
using namespace std;

// 문자열의 특정 문자를 "참조"로 반환하는 함수
// char& : 문자 자체를 반환하는 것이 아니라 원본 문자를 참조로 반환
char& getChar(string& str, int index)
{
    // str[index]의 실제 문자 위치를 반환
    // 따라서 함수 밖에서도 원본 수정 가능
    return str[index];
}

int main()
{
    // 문자열 객체 생성
    string s = "Hello";

    // getChar(s, 0)은 s[0]을 참조로 반환
    // 따라서 아래 코드는 실제로 s[0] = 'Y'; 와 같은 의미
    getChar(s, 0) = 'Y';

    // 변경된 문자열 출력
    // Hello -> Yello
    cout << s << endl;

    return 0;
}
</pre>

------------------------
##실습과제2 출력결과
<img width="365" height="119" alt="스크린샷 2026-05-11 205427" src="https://github.com/user-attachments/assets/3775d9c1-fefb-4571-aa48-f432370e1eb4" />

------------------------
##실습과제3 출력결과
<img width="393" height="117" alt="스크린샷 2026-05-11 205503" src="https://github.com/user-attachments/assets/376f02d6-b28f-4559-8f97-3171772085cc" />

------------------------
##실습과제4 출력결과
<img width="387" height="76" alt="스크린샷 2026-05-11 205605" src="https://github.com/user-attachments/assets/5a5915e3-afe2-406c-babf-11346b39b377" />
