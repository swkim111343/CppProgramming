// **********************************************
// 제 목 : 실습과제3
// 날 짜 : 2026년 4월2일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;

class Triangle {
private:
    int width;
    int height;

public:
    // 기본 생성자 (1, 1)
    Triangle() {
        this->width = 1;
        this->height = 1;
    }

    // 밑변만 받는 생성자 (w, 1)
    Triangle(int w) {
        this->width = w;
        this->height = 1;
    }

    // 밑변, 높이 모두 받는 생성자 (w, h)
    Triangle(int w, int h) {
        this->width = w;
        this->height = h;
    }

    // 넓이 구하는 함수
    double getArea() {
        return this->width * this->height / 2.0;
    }
};

int main() {
    Triangle tri1; // (1,1)
    cout << "삼각형의 면적은 " << tri1.getArea() << endl;

    Triangle tri2(10); // (10,1)
    cout << "삼각형의 면적은 " << tri2.getArea() << endl;

    Triangle tri3(10, 2); // (10,2)
    cout << "삼각형의 면적은 " << tri3.getArea() << endl;

    return 0;
}