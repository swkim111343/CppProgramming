// **********************************************
// 제 목 : 실습과제3
// 날 짜 : 2026년 3월26일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include<iostream>
using namespace std;

class Triangle {
private:
	int width, height;	//멤버함수 private
public:
	Triangle();	//생성자
	~Triangle();//소멸자
	Triangle(int a, int b);//매개변수 가진 생성자

	void setWidth(int w);
	void setHeight(int h);

	double getArea();
	int getWidth();
	int getHeight();
};

Triangle::Triangle():Triangle(1,1){}
Triangle::Triangle(int a, int b) :width(a), height(b) {	//멤버초기화리스트 형식
	cout << "폭" << a << ", 높이" << b << "삼각형 생성 " << endl;
}
Triangle::~Triangle() {
	cout << "폭" << width << ", 높이" << height << "삼각형 소멸" << endl;
}

void Triangle::setWidth(int w) {	//setter
	width = w;
}

void Triangle::setHeight(int h) {	//setter
	height = h;
}

int Triangle::getHeight() {	//getter
	return height;
}

int Triangle::getWidth() {	//getter
	return width;
}

double Triangle::getArea() {
	return (1.0 / 2.0) * width * height;
}


int main() {
	Triangle tri;
	tri.setWidth(3);
	tri.setHeight(5);
	cout << "삼각형의 폭은 " << tri.getWidth() << endl;
		cout << "삼각형의 높이는 " << tri.getHeight() << endl;
		cout << "삼각형의 넓이는 " << tri.getArea() << endl;
		return 0;
}
