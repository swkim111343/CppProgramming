// **********************************************
// 제 목 : 실습과제2
// 날 짜 : 2026년 5월9일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include<iostream>
using namespace std;

// number의 "별명"을 받아서 원본을 직접 수정
void add2(int& value)
{
    value += 2; // 원본 number 자체가 2 증가
}

int main(void)
{
    int number;

    cout << "정수를 입력하세요: ";
    cin >> number;

    add2(number); // number 자체가 전달됨 (복사가 아님)

    cout << "2만큼 증가한 값: " << number << endl;

    return 0;
}