// **********************************************
// 제 목 : 실습과제4
// 날 짜 : 2026년 4월8일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;

class Triangle {
    int base, height;

public:
    Triangle(int b = 1, int h = 1) {
        base = b;
        height = h;
        cout << "밑변 " << base << "높이 " << height << "인 삼각형 생성" << endl;
    }

    ~Triangle() {
        cout << "밑변 " << base << "높이 " << height << "인 삼각형 소멸" << endl;
    }

    double getArea() {
        return 0.5 * base * height;
    }
};

int main() {
    Triangle* t = new Triangle[3]{
        Triangle(1, 1),
        Triangle(2, 2),
        Triangle(4, 4)
    };

    for (int i = 0; i < 3; i++) {
        cout << "삼각형의 면적은 " << t[i].getArea() << endl;
    }

    delete[] t; //메모리헤재

    return 0;
}