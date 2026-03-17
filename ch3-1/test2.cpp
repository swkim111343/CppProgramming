// **********************************************
// 제 목 : 실습과제2(Triangle 면적 구하는 예제)
// 날 짜 : 2026년 3월17일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;
class Triangle { //클래스 선언부
public:
	int width;
	int height;
	int getArea(); //면적을 계산하여 리턴하는 함수
};
int Triangle::getArea() { //클래스 구현부
	return width * height/2;	//삼각형 면적 구하는 공식으로 변경
}
int main() {
	Triangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "삼각형의 면적은 " << rect.getArea() << endl;
}
