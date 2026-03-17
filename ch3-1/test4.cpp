// **********************************************
// 제 목 : 실습과제4
// 날 짜 : 2026년 3월17일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;

class Rectangle { //클래스 선언부
public:
    int x, y;       
    int width;  //좌측상단 좌표 저장x,y
    int height;
    int getArea();          //면적
    int getPerimeter();     //둘레
    void getBottomRight();  //우측 하단 좌표 출력
};

// 구현부
int Rectangle::getArea() {
    return width * height;
}

int Rectangle::getPerimeter() {
    return 2 * (width + height);
}

void Rectangle::getBottomRight() {
    int rightX = x + width;
    int rightY = y - height; // y는 위쪽이 +라고 가정
    cout << "(" << rightX << ", " << rightY << ")";
}

int main() {
    Rectangle rect;

    //값 설정
    rect.x = 1;
    rect.y = 2;
    rect.width = 3;
    rect.height = 4;

    cout << "사각형의 면적은 " << rect.getArea() << endl;
    cout << "사각형의 둘레길이는 " << rect.getPerimeter() << endl;
    cout << "사각형의 우측하단의 좌표는 ";
    rect.getBottomRight();
    cout << endl;
}