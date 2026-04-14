// **********************************************
// 제 목 : 실습과제2
// 날 짜 : 2026년 3월18일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;
class Triangle {
	int width, height;
public:
	Triangle();	//기본생성자
	Triangle(int a, int b);	//매개변수 생성자
	double getArea();

};

Triangle::Triangle() : Triangle(1, 1) { } // 위임 생성자 1,1로 초기화

Triangle::Triangle(int a, int b) {	//타겟생성자
	width = a;
	height = b;
}

double Triangle::getArea() {	
	return (1.0 / 2.0) * width * height;
}

int main() {
	Triangle tri1;
	cout << "삼각형의 면적은" << tri1.getArea() << endl;

	Triangle tri2(2, 4);
	cout << "삼각형의 면적은" << tri2.getArea() << endl;
	return 0;
}