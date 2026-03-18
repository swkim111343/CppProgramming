// **********************************************
// 제 목 : 실습과제3
// 날 짜 : 2026년 3월18일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;

class Sphere {
    double radius;

public:
    Sphere();
    Sphere(double r);

    double getVolume() {
        double v = (4.0 / 3.0) * 3.14 * radius * radius * radius;   //부피 공식

        //소수점 둘째 자리 반올림
        v = (int)(v * 100 + 0.5) / 100.0;

        return v;
    }
};

// 위임 생성자
Sphere::Sphere() : Sphere(1) {}

// 타겟 생성자
Sphere::Sphere(double r) : radius(r) {}

int main() {
    Sphere sph1;
    cout << "구의 부피는 " << sph1.getVolume() << endl;

    Sphere sph2(3);
    cout << "구의 부피는 " << sph2.getVolume() << endl;

    return 0;
}