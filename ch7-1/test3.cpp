// **********************************************
// 제 목 : 실습과제3
// 날 짜 : 2026년 5월 27일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;

// Complex 클래스 정의
class Complex {
private:
    int real;   // 실수부
    int img;    // 허수부

public:
    // 생성자
    Complex(int r = 0, int i = 0) {
        real = r;
        img = i;

        cout << "복소수 " << real << "+" << img << "j 생성" << endl;
    }

    // 출력 함수
    void show() {
        cout << real << "+" << img << "j" << endl;
    }

    // ComplexManager 클래스에 접근 허용
    friend class ComplexManager;
};

// ComplexManager 클래스 정의
class ComplexManager {
public:

    // 복소수 덧셈 멤버함수
    Complex ComplexAdd(Complex a, Complex b) {

        Complex temp;

        temp.real = a.real + b.real;
        temp.img = a.img + b.img;

        return temp;
    }
};

int main() {

    Complex x(2, 3), y(-5, 10), sum;

    ComplexManager man;

    sum = man.ComplexAdd(x, y);

    cout << "두 복소수의 합은 ";
    sum.show();

    return 0;
}