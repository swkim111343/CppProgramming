// **********************************************
// 제 목 : 실습과제1
// 날 짜 : 2026년 6월 10일
// 작성자 : 2001485 김선우
// **********************************************
#include <iostream>
using namespace std;

// 복소수를 표현하는 클래스
class Complex {
private:
    int real;   // 실수부
    int imag;   // 허수부

public:
    // 생성자
    // 객체 생성 시 실수부와 허수부를 초기화
    // 값을 전달하지 않으면 0으로 초기화
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // 입출력 연산자 함수가 private 멤버에 접근할 수 있도록 friend 선언
    friend istream& operator>>(istream& in, Complex& c);
    friend ostream& operator<<(ostream& out, const Complex& c);
};

// >> 연산자 오버로딩
// Complex 객체를 입력받기 위한 함수
istream& operator>>(istream& in, Complex& c) {
    cout << "실수부:";
    in >> c.real;   // 실수부 입력

    cout << "허수부:";
    in >> c.imag;   // 허수부 입력

    return in;      // 입력 스트림 반환
}

// << 연산자 오버로딩
// Complex 객체를 출력하기 위한 함수
ostream& operator<<(ostream& out, const Complex& c) {

    // 실수부 출력
    out << c.real;

    // 허수부의 부호에 따라 출력 형식 결정
    if (c.imag >= 0)
        out << "+" << c.imag << "j";
    else
        out << c.imag << "j";

    out << endl;

    return out;     // 출력 스트림 반환
}
int main() {
    Complex x, y;
    cin >> x >> y;
    cout << x << y;
    return 0;
}