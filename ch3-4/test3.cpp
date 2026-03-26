// **********************************************
// 제 목 : 실습과제3
// 날 짜 : 2026년 3월26일
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
    Triangle();     //생성자
    ~Triangle();    //소멸자
    void setWidth(int w);
    void setHeight(int h);
    int getWidth();
    int getHeight();
    double getArea();   // 면적 함수
};

//생성자
Triangle::Triangle() {
    width = 1;
    height = 1;
    cout << "폭1,높이1 삼각형생성" << endl;
}

//소멸자
Triangle::~Triangle() {
    cout << "폭" << width << ",높이" << height << " 삼각형소멸" << endl;
}

// setter
void Triangle::setWidth(int w) {
    width = w;
}

void Triangle::setHeight(int h) {
    height = h;
}

// getter
int Triangle::getWidth() {
    return width;
}

int Triangle::getHeight() {
    return height;
}

//면적 계산
double Triangle::getArea() {
    return width * height / 2.0;
}

int main() {
    Triangle tri;

    tri.setWidth(3);
    tri.setHeight(5);

    cout << "삼각형의 폭은 " << tri.getWidth() << endl;
    cout << "삼각형의 높이는 " << tri.getHeight() << endl;
    cout << "삼각형의 면적은 " << tri.getArea() << endl;

    return 0;
}