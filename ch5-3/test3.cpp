// **********************************************
// 제 목 : 실습과제3
// 날 짜 : 2026년 5월 11일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
#include <string>
using namespace std;

// 함수 선언
// string& : 참조 변수 사용
// 원본 문자열을 직접 변경 가능
void SwapString(string& a, string& b);

int main() {

    string s1("hello");
    string s2("world");

    cout << "교환전 문자열 " << s1 << " " << s2 << endl;

    // 함수 호출
    SwapString(s1, s2);

    cout << "교환후 문자열 " << s1 << " " << s2 << endl;

    return 0;
}

// 함수 정의
void SwapString(string& a, string& b)
{
    // 임시 문자열 사용
    string temp;

    temp = a;
    a = b;
    b = temp;
}