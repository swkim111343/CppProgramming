// **********************************************
// 제 목 : 실습과제4
// 날 짜 : 2026년 3월18일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;

class Rectangle {
private:
    int x, y;   //좌측 상단 좌표
    int width, height;  //너비, 높이

public:
    Rectangle();
    Rectangle(int x, int y);
    Rectangle(int x, int y, int w, int h);
    int getArea();
    int getPerimeter();
    void getBottomRight();
};

//타겟 생성자
Rectangle::Rectangle(int x, int y, int w, int h)
    : x(x), y(y), width(w), height(h) {}

//위임 생성자(기본값)
Rectangle::Rectangle() : Rectangle(1, 1, 1, 1) {}

//위임 생성자 (x, y만 받는 경우)
Rectangle::Rectangle(int x, int y) : Rectangle(x, y, 1, 1) {}

//면적
int Rectangle::getArea() {
    return width * height;
}

// 둘레
int Rectangle::getPerimeter() {
    return 2 * (width + height);
}

// 우측 하단 좌표 출력
void Rectangle::getBottomRight() {
    cout << "(" << x + width << ", " << y - height << ")";
}

int main() {
    Rectangle rect1; 
    Rectangle rect2(3, 5);         
    Rectangle rect3(3, 5, 2, 4);  

    cout << "rect1의 면적은 " << rect1.getArea() << endl;
    cout << "rect2의 둘레길이는 " << rect2.getPerimeter() << endl;
    cout << "rect3의 우측하단의 좌표는 ";
    rect3.getBottomRight();
    cout << endl;

    return 0;
}