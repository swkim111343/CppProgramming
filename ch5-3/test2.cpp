// **********************************************
// 제 목 : 실습과제2
// 날 짜 : 2026년 5월 11일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
#include <string>
#include <cctype> // toupper 사용을 위한 헤더
using namespace std;

// 함수 선언
// string& : 참조에 의한 호출
// 원본 문자열 자체를 수정 가능
void Uppercase(string& str);

int main() {

    string s1("hello");

    cout << "변환전 문자열 " << s1 << endl;

    // 함수 호출
    Uppercase(s1);

    cout << "변환후 문자열 " << s1 << endl;

    return 0;
}

// 함수 정의
void Uppercase(string& str)
{
    // 문자열의 각 문자를 하나씩 검사
    for (int i = 0; i < str.length(); i++)
    {
        // toupper()로 대문자 변환
        str[i] = toupper(str[i]);
    }
}