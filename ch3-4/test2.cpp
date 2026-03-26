// **********************************************
// 제 목 : 실습과제2
// 날 짜 : 2026년 3월26일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;

class Circle {
private:    //public변수를 -> private로 변경
    int radius;

public:
    Circle();
    void setRadius(int r);  //setter함수 선언  
    int getRadius();    // getter함수 선언
};

Circle::Circle() {
    radius = 1;
}

void Circle::setRadius(int r) { //값 설정함수 추가
    radius = r;
}

int Circle::getRadius() {   //값 반환 함수 추가
    return radius;
}

int main() {
    Circle waffle;
    waffle.setRadius(5);    //setter사용
    cout << "원의 반지름은 " << waffle.getRadius() << endl;   //직접 접근 getter사용
    return 0;
}