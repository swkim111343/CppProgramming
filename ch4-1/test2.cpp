// **********************************************
// 제 목 : 실습과제2
// 날 짜 : 2026년 4월2일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;

// 클래스 정의
class Triangle {
private:
    int width, height;

public:
    void setWidth(int w) { width = w; }
    void setHeight(int h) { height = h; }
    double getArea() { return width * height / 2.0; }
};

int main() {
    Triangle tri;

    // 객체 포인터 선언 및 초기화
    Triangle* p = &tri;

    // 포인터로 멤버함수 호출
    p->setWidth(3);
    p->setHeight(5);
    cout << "삼각형의 면적은 " << p->getArea() << endl;

    return 0;
}