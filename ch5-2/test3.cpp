// **********************************************
// 제 목 : 실습과제3
// 날 짜 : 2026년 5월9일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include<iostream>
using namespace std;

// 함수 선언 (프로토타입)
void swap(int& a, int& b);

int main(void)
{
    int x, y;

    cout << "정수x를 입력하시오: ";
    cin >> x;

    cout << "정수y를 입력하시오: ";
    cin >> y;

    // swap 함수 호출 전 값 출력
    cout << "swap함수 호출 전 x=" << x << ", y=" << y << endl;

    // 참조에 의한 호출 (원본이 직접 변경됨)
    swap(x, y);

    // swap 함수 호출 후 값 출력
    cout << "swap함수 호출 후 x=" << x << ", y=" << y << endl;

    return 0;
}

// 함수 정의 (참조에 의한 호출)
void swap(int& a, int& b)
{
    int temp;

    temp = a;  // a 값을 임시 저장
    a = b;     // b 값을 a에 저장
    b = temp;  // 저장해둔 a 값을 b에 저장
}
