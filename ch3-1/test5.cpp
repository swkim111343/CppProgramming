// **********************************************
// 제 목 : 실습과제5
// 날 짜 : 2026년 3월17일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;

class Rectangle { 
public:
    int x, y;
    int width;  
    int height;
    int getArea();          
    int getPerimeter();   
    void getBottomRight();  
    void input();   //입력 함수를 추가
};
//입력함수
void Rectangle::input() {
    cout << "사각형의 좌측상단좌표(x,y) : ";
    cin >> x >> y;

    cout << "사각형의 폭과 높이(width,height) : ";
    cin >> width >> height;
}

int Rectangle::getArea() {
    return width * height;
}

int Rectangle::getPerimeter() {
    return 2 * (width + height);
}

void Rectangle::getBottomRight() {
    int rightX = x + width;
    int rightY = y - height;
    cout << "(" << rightX << ", " << rightY << ")";
}

int main() {
    Rectangle rect;

    rect.input(); //여기서 키보드 입력으로 변경

    cout << "사각형의 면적은 " << rect.getArea() << endl;
    cout << "사각형의 둘레길이는 " << rect.getPerimeter() << endl;
    cout << "사각형의 우측하단의 좌표는 ";
    rect.getBottomRight();
    cout << endl;
}