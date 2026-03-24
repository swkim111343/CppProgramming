// **********************************************
// 제 목 : 실습과제2
// 날 짜 : 2026년 3월24일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;

class Triangle {
private:
    int base;
    int height;

public:
    // 기본 생성자
    Triangle() {
        base = 1;
        height = 1;
        cout << "밑변 " << base << "높이 " << height << "인 삼각형 생성" << endl;
    }

    // 매개변수 생성자
    Triangle(int b, int h) {
        base = b;
        height = h;
        cout << "밑변 " << base << "높이 " << height << "인 삼각형 생성" << endl;
    }

    // 면적 계산 함수
    double getArea() {
        return base * height / 2.0;
    }

    // 소멸자
    ~Triangle() {
        cout << "밑변 " << base << "높이 " << height << "인 삼각형 소멸" << endl;
    }
};

// 클래스 정의
int main() {
    Triangle tri1; //밑변,높이 1로 초기화
    cout << "삼각형의 면적은" << tri1.getArea() << endl;

    Triangle tri2(2, 4); //밑변=2,높이=4로 초기화
    cout << "삼각형의 면적은" << tri2.getArea() << endl;
        return 0;
}