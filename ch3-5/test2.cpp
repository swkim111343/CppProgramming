// **********************************************
// 제 목 : 실습과제2
// 날 짜 : 2026년 3월30일
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
    //자동 인라인(생성자)
    Triangle() {
        width = 1;
        height = 1;
        cout << "폭" << width << ",높이" << height << "인 삼각형 생성" << endl;
    }

    //자동인라인 (소멸자
    ~Triangle() {
        cout << "폭" << width << ",높이" << height << "인 삼각형 소멸" << endl;
    }

    //자동인라인(멤버함수)
    void setWidth(int w) { width = w; }
    void setHeight(int h) { height = h; }
    double getArea() { return width * height / 2.0; }
};

int main() {
    Triangle tri;
    tri.setWidth(3);
    tri.setHeight(5);
    cout << "삼각형의 면적은 " << tri.getArea() << endl;
    return 0;
}