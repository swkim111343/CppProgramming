// **********************************************
// 제 목 : 실습과제2
// 날 짜 : 2026년 6월 2일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;

class Complex {
private:
    double real; // 실수부
    double img;  // 허수부

public:
    Complex(double r = 0, double i = 0) {
        real = r;
        img = i;
    }

    // * 연산자 오버로딩
    Complex operator*(const Complex& c) {
        return Complex(
            real * c.real - img * c.img,
            real * c.img + img * c.real
        );
    }

    void show() {
        cout << real;
        if (img >= 0)
            cout << "+" << img << "j" << endl;
        else
            cout << img << "j" << endl;
    }
};

int main() {
    Complex x(2, 3), y(-5, 10), sum;

    sum = x * y;

    cout << "두 복소수의 곱은 ";
    sum.show();

    return 0;
}