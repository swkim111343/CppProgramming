// **********************************************
// 제 목 : 실습과제2
// 날 짜 : 2026년 6월 8일
// 작성자 : 2001485 김선우
// **********************************************
#include <iostream>
using namespace std;

class Complex {
private:
    int real;   // 실수부
    int img;    // 허수부

public:
    // 생성자
    Complex(int r, int i) : real(r), img(i) {
        cout << "복소수 " << real << " "
            << (img >= 0 ? "+" : "-") << " "
            << abs(img) << "j 생성" << endl;
    }

    // friend 연산자 함수 선언
    friend Complex& operator++(Complex& c);      // 전위 증가
    friend Complex operator--(Complex& c, int);  // 후위 감소

    // 출력 함수
    void show() {
        cout << real << " "
            << (img >= 0 ? "+" : "-") << " "
            << abs(img) << "j" << endl;
    }
};

// 전위 증가 (++x)
Complex& operator++(Complex& c) {
    c.real++;   // 실수부 1 증가
    c.img++;    // 허수부 1 증가
    return c;
}

// 후위 감소 (x--)
Complex operator--(Complex& c, int) {
    Complex temp = c;  // 감소 전 상태 저장

    c.real--;          // 실수부 1 감소
    c.img -= 2;        // 허수부 2 감소

    return temp;
}

int main() {
    Complex x(2, -3);

    ++x;
    cout << "증가결과 ";
    x.show();

    x--;
    cout << "감소결과 ";
    x.show();

    return 0;
}