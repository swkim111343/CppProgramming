// **********************************************
// 제 목 : 실습과제2
// 날 짜 : 2026년 3월26일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include<iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	~Circle();
	Circle(int r);
	
	void setRadius(int r);
	int getRadius();
};

Circle::Circle():Circle(1){}
Circle::Circle(int r) :radius(r){}
Circle::~Circle(){}

// setter
void Circle::setRadius(int r) {
	radius = r;
}

// getter
int Circle::getRadius() {
	return radius;
}

int main() {
	
	Circle waffle;
	waffle.setRadius(5);
	cout << "waffle의 반지름은 " << waffle.getRadius() << endl;
	return 0;
}
