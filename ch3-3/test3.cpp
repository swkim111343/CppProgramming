// **********************************************
// 제 목 : 실습과제3
// 날 짜 : 2026년 3월24일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include<iostream>
using namespace std;

class Triangle {
private:
    int width, height;
public:
    Triangle();
    ~Triangle();
    Triangle(int a, int b);

    double getArea();
};

Triangle::Triangle() :Triangle(1, 1) {}
Triangle::Triangle(int a, int b) :width(a), height(b) {
    cout << "밑변" << a << "높이" << b << "인 삼각형 생성" << endl;
}
Triangle::~Triangle() {
    cout << "밑변" << width << "높이" << height << "인 삼각형 소멸" << endl;
}

double Triangle::getArea() {
    return (1.0 / 2.0) * width * height;
}


//main 함수 안에있는 지역함수를 main 바깥으로 뺌
Triangle tri1;
Triangle tri2(2, 4);

int main() {

    cout << "tri1의 면적은 " << tri1.getArea() << endl;
    cout << "tri2의 면적은 " << tri2.getArea() << endl;

    return 0;
}
