// **********************************************
// 제 목 : 실습과제3(구의 부피, 면적 구하는 예제)
// 날 짜 : 2026년 3월17일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;

class Sphere { //클래스 선언부
public:
    double radius;
    double getVolume();     //부피 함수
    double getSurface();    //표면적 함수
};

// 클래스 구현부
double Sphere::getVolume() {
    return (4.0 / 3.0) * 3.14 * radius * radius * radius;
}

double Sphere::getSurface() {
    return 4 * 3.14 * radius * radius;
}

int main() {
    Sphere s;
    s.radius = 3; //반지름 설정
    cout << "구의 부피는 " << s.getVolume() << endl;
    cout << "구의 표면적은 " << s.getSurface() << endl;
}