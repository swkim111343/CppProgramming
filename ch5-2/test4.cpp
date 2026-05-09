// **********************************************
// 제 목 : 실습과제3
// 날 짜 : 2026년 5월9일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include<iostream>
using namespace std;

// 함수 선언 (정수부와 소수부를 참조로 전달)
void get_parts(double num, int& intPart, double& fracPart);

int main(void)
{
    double num;
    int intPart;
    double fracPart;

    cout << "실수를 입력하시오: ";
    cin >> num;

    // 함수 호출 (정수부, 소수부 계산)
    get_parts(num, intPart, fracPart);

    // 출력은 main에서 수행
    cout << "정수부: " << intPart << endl;
    cout << "소수부: " << fracPart << endl;

    return 0;
}

// 함수 정의
void get_parts(double num, int& intPart, double& fracPart)
{
    // 정수부 추출 (형변환)
    intPart = (int)num;

    // 소수부 = 원래값 - 정수부
    fracPart = num - intPart;
}