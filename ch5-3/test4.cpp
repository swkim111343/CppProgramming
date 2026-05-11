// **********************************************
// 제 목 : 실습과제4
// 날 짜 : 2026년 5월 11일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;

// 클래스 정의
class Circle {
    int radius;

public:
    // 생성자
    Circle(int radius) {
        this->radius = radius;
    }

    // 반지름 증가 함수
    // 자기 자신 객체를 참조로 반환
    Circle& plus(int n) {
        radius += n;
        return *this;
    }

    // 반지름 감소 함수
    Circle& minus(int n) {
        radius -= n;
        return *this;
    }

    // 반지름 반환 함수
    int getRadius() {
        return radius;
    }
};

int main() {

    Circle a(5);

    // 연속 함수 호출 가능
    a.plus(1).plus(2).plus(3).minus(3).minus(2).minus(1).minus(5);

    cout << "객체 a의 반지름은 " << a.getRadius();

    return 0;
}