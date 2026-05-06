// **********************************************
// 제 목 : 실습과제3
// 날 짜 : 2026년 5월6일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
#include <string>
using namespace std;

// 함수 선언
string GetLatterString(string* a, string* b);

int main() {
    string s1("hello");
    string s2("world");
    string res;

    res = GetLatterString(&s1, &s2); // 함수 호출 (주소 전달)

    cout << "사전에서 뒤에 나오는 문자열은 "
        << res << "입니다." << endl;
}

// 함수 정의
string GetLatterString(string* a, string* b)
{
    // 포인터이므로 역참조하여 값 비교
    if (*a > *b)
        return *a;
    else
        return *b;
}