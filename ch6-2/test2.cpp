// **********************************************
// 제 목 : 실습과제2
// 날 짜 : 2026년 5월 19일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;

// 사각형을 표현하는 클래스
class Rectangle {
private:
    int width;   // 사각형의 폭 (가로 길이)
    int height;  // 사각형의 높이 (세로 길이)

public:
    // 생성자: 폭과 높이를 초기화 (기본값: 1, 1)
    Rectangle(int w = 1, int h = 1);

    // 사각형의 정보를 출력하는 멤버 함수
    void show();
};

// 생성자 구현
Rectangle::Rectangle(int w, int h) {
    width = w;   // 전달받은 폭으로 초기화
    height = h;  // 전달받은 높이로 초기화
}

void Rectangle::show() {
    cout << "사각형 폭은 " << width
        << " 높이는 " << height << endl;
}

int main() {
    Rectangle rect0;
    rect0.show();
    Rectangle rect1(10);
    rect1.show();
    Rectangle rect2(10, 20);
    rect2.show();

    return 0;
}