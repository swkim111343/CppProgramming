// **********************************************
// 제 목 : 실습과제4
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
    Triangle(int w, int h); //매개변수 생성자
    ~Triangle();            //소멸자

    void setWidth(int w);
    void setHeight(int h);

    int getWidth();
    int getHeight();
};

//생성자 
Triangle::Triangle(int w, int h) {
    if (w <= 0 || h <= 0) {
        width = 1;
        height = 1;
        cout << "길이는 양수여야함, 대신에 폭1,높이1 삼각형생성" << endl;
    }
    else {
        width = w;
        height = h;
    }
}

//소멸자
Triangle::~Triangle() {
    cout << "폭" << width << ",높이" << height << " 삼각형소멸" << endl;
}

//setter
void Triangle::setWidth(int w) {
    if (w <= 0) {
        cout << "폭은 양수이어야 함" << endl;
        return;
    }
    width = w;
}

void Triangle::setHeight(int h) {
    if (h <= 0) {
        cout << "높이는 양수이어야 함" << endl;
        return;
    }
    height = h;
}

// getter
int Triangle::getWidth() {
    return width;
}

int Triangle::getHeight() {
    return height;
}

int main() {
    Triangle tri(-10, -5); //생성자에서 예외 처리

    tri.setWidth(-3);  //에러 메시지
    tri.setHeight(-5); //에러 메시지

    tri.setWidth(3);
    tri.setHeight(5);

    cout << "삼각형의 폭은 " << tri.getWidth() << endl;
    cout << "삼각형의 높이는 " << tri.getHeight() << endl;

    return 0;
}