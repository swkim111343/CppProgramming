// **********************************************
// 제 목 : 실습과제3
// 날 짜 : 2026년 5월 19일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;

// 3차원 좌표를 나타내는 클래스
class Point3D {
private:
    int x;  // x축 좌표
    int y;  // y축 좌표
    int z;  // z축 좌표

public:
    // 생성자 1개만 선언 (디폴트 매개변수 사용)
    Point3D(int a = 0, int b = 0, int c = 0);

    // 좌표 정보를 출력하는 멤버 함수
    void show();
};

// 생성자 구현
Point3D::Point3D(int a, int b, int c) {
    x = a;
    y = b;
    z = c;
}

void Point3D::show() {
    cout << "3차원 점의 좌표는 ("
        << x << "," << y << "," << z << ")" << endl;
}

int main() {
    Point3D p0;       
    p0.show();
    Point3D p1(1);     
    p1.show();
    Point3D p2(1, 2); 
    p2.show();
    Point3D p3(1, 2, 3);
    p3.show();

    return 0;
}