// **********************************************
// 제 목 : 실습과제4
// 날 짜 : 2026년 3월24일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include<iostream>
using namespace std;

class Sphere {
private:
	int radius;
public:
	Sphere();
	~Sphere();
	Sphere(int r);

	double getVolume();
};

Sphere::Sphere():Sphere(1){}
Sphere::Sphere(int r) :radius(r) { cout << "반지름" << radius << "인 구 생성" << endl; }
Sphere::~Sphere() { cout << "반지름" << radius << "인 구 소멸" << endl; }

double Sphere::getVolume() { return (4.0 / 3.0) * (radius*radius * radius) * 3.14; }
// 클래스 정의

Sphere sph1; // 반지름 =1로 초기화
Sphere sph2(3); // 반지름 =3로 초기화
int main() {
	cout << "구의 부피는" << sph1.getVolume() << endl;
	cout << "구의 부피는" << sph2.getVolume () << endl;
		return 0;
}
