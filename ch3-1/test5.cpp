// **********************************************
// 제 목 : 실습과제5
// 날 짜 : 2026년 3월17일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;
class Rectangle { // Rectangle 클래스 선언부
public:
	int width;
	int height;
	int getArea(); // 면적을 계산하여 리턴하는 함수
	int x, y;
	int getW();

};
int Rectangle::getArea() { // Rectangle 클래스 구현부
	return width * height;
}
int Rectangle::getW() {
	return 2 * (width + height);
}

int main() {
	Rectangle rect;
	
	cout << "사각형의 좌측상단좌표(x,y): ";
	cin >> rect.x >> rect.y;
	cout << "사각형의 폭과 높이(width,height): ";
	cin >> rect.width >> rect.height;

	cout << "사각형의 면적은 " << rect.getArea() << endl;
	cout << "사각형 둘레 길이는" << rect.getW() << endl;
	cout << "사각형 우측하단의 좌표는(" << rect.x+rect.width << "," << rect.y-rect.height << ")";

	return 0;
}
