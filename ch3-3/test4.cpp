// **********************************************
// 제 목 : 실습과제4
// 날 짜 : 2026년 3월24일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;

class Sphere {
private:
    int radius;

public:
    // 기본 생성자
    Sphere() {
        radius = 1;
        cout << "반지름 " << radius << "인 구 생성" << endl;
    }

    // 매개변수 생성자
    Sphere(int r) {
        radius = r;
        cout << "반지름 " << radius << "인 구 생성" << endl;
    }

    // 부피 계산 함수
    double getVolume() {
        return (4.0 / 3.0) * 3.14 * radius * radius * radius;
    }

    // 소멸자
    ~Sphere() {
        cout << "반지름 " << radius << "인 구 소멸" << endl;
    }
};

// 클래스 정의
int main() {
    Sphere sph1; // 반지름 =1로 초기화
    cout << "구의 부피는" << sph1.getVolume() << endl;

    Sphere sph2(3); // 반지름 =3로 초기화
    cout << "구의 부피는" << sph2.getVolume () << endl;
        return 0;
}