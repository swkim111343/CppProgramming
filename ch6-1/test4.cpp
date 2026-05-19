// **********************************************
// 제 목 : 실습과제4
// 날 짜 : 2026년 5월 19일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;

class Point3D {
private:
    int x, y, z;   // 3차원 좌표를 저장하는 멤버변수

public:
    Point3D();                 // 기본 생성자
    Point3D(int a);            // x만 초기화
    Point3D(int a, int b);     // x, y 초기화
    Point3D(int a, int b, int c); // x, y, z 초기화

    void show();               // 좌표를 출력하는 멤버함수
};

// 기본 생성자: (0,0,0)으로 초기화
Point3D::Point3D() {
    x = y = z = 0;
}

// 한 개의 값으로 초기화: (a,0,0)
Point3D::Point3D(int a) {
    x = a;
    y = 0;
    z = 0;
}

// 두 개의 값으로 초기화: (a,b,0)
Point3D::Point3D(int a, int b) {
    x = a;
    y = b;
    z = 0;
}

// 세 개의 값으로 초기화: (a,b,c)
Point3D::Point3D(int a, int b, int c) {
    x = a;
    y = b;
    z = c;
}

// 좌표 출력
void Point3D::show() {
    cout << "3차원 점의 좌표는 (" << x << "," << y << "," << z << ")" << endl;
}

int main() {
    Point3D p0;        // (0,0,0)
    p0.show();

    Point3D p1(1);     // (1,0,0)
    p1.show();

    Point3D p2(1, 2);  // (1,2,0)
    p2.show();

    Point3D p3(1, 2, 3); // (1,2,3)
    p3.show();

    return 0;
}