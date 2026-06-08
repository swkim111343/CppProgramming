// **********************************************
// 제 목 : 실습과제1
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
    Complex(int r, int i) {
        real = r;
        img = i;

        cout << "복소수 " << real << " "
            << (img >= 0 ? "+" : "-") << " "
            << abs(img) << "j 생성" << endl;
    }

    // 전위 증가 연산자 (++x)
    // 실수부와 허수부를 각각 1 증가
    Complex& operator++() {
        real++;
        img++;
        return *this;   // 변경된 객체 자신 반환
    }

    // 후위 감소 연산자 (x--)
    // int 매개변수는 후위 연산자임을 구분하기 위한 더미 매개변수
    Complex operator--(int) {
        Complex temp = *this; // 감소 전 객체 저장

        real--;     // 실수부 1 감소
        img -= 2;   // 허수부 2 감소

        return temp; // 감소 전 객체 반환
    }

    // 복소수 출력 함수
    void show() {
        cout << real << " "
            << (img >= 0 ? "+" : "-") << " "
            << abs(img) << "j" << endl;
    }
};

int main() {
    // 복소수 객체 생성
    Complex x(2, -3);

    // 전위 증가 연산 수행
    ++x;
    cout << "증가결과 ";
    x.show();

    // 후위 감소 연산 수행
    x--;
    cout << "감소결과 ";
    x.show();

    return 0;
}