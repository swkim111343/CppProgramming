// **********************************************
// 제 목 : 실습과제4
// 날 짜 : 2026년 5월6일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
#include <string>
using namespace std;

// 함수 선언
void SwapString(string* a, string* b);

int main() {
    string s1("hello");
    string s2("world");

    cout << "호출전 s1:" << s1 << " s2:" << s2 << endl;

    SwapString(&s1, &s2); // 주소 전달

    cout << "호출후 s1:" << s1 << " s2:" << s2 << endl;
}

// 함수 정의
void SwapString(string* a, string* b)
{
    string temp;
    temp = *a;
    *a = *b;
    *b = temp;
}