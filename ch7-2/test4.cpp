// **********************************************
// 제 목 : 실습과제4
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

    // 복소수 - 정수
    Complex operator-(int n) {
        return Complex(real - n, img);
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
    Complex a(3, 5), b;

    a.show();
    b.show();

    b = a - 2;

    a.show();
    b.show();

    return 0;
}