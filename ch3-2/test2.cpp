// **********************************************
// 제 목 : 실습과제2
// 날 짜 : 2026년 3월18일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;

class Triangle {
    double base, height; //밑변, 높이 변수 생성

public:
    Triangle();                //기본 생성자 (위임)
    Triangle(double b, double h); //타겟 생성자

    double getArea() {
        return (1.0 / 2.0) * base * height;
    }
};

//위임 생성자
Triangle::Triangle() : Triangle(1, 1) { }

//타겟 생성자 (멤버 초기화 리스트 사용)
Triangle::Triangle(double b, double h) : base(b), height(h) { }

int main() {
    Triangle tri1; // 밑변=1, 높이=1
    cout << "삼각형의 면적은 " << tri1.getArea() << endl;

    Triangle tri2(2, 4); // 밑변=2, 높이=4
    cout << "삼각형의 면적은 " << tri2.getArea() << endl;

    return 0;
}