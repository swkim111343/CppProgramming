// **********************************************
// 제 목 : 실습과제2
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

Triangle::Triangle():Triangle(1,1){}    //생성자
Triangle::Triangle(int a, int b) :width(a), height(b){    //멈버초기화 리스트방식
	cout << "밑변" << a << "높이" << b << "인 삼각형 생성" << endl;
}
Triangle::~Triangle(){    //소멸자 
	cout << "밑변" << width << "높이" << height << "인 삼각형 소멸" << endl;
}

double Triangle::getArea() {
	return (1.0 / 2.0) * width * height;
}

int main() {
	Triangle tri1;    //지금은 tri1,tri2가 main함수안의지역함수로 되어있음
	cout << "삼각형의 면적은" << tri1.getArea() << endl;

	Triangle tri2(2, 4);
	cout << "삼각형의 면적은" << tri2.getArea() << endl;

	return 0;
}
