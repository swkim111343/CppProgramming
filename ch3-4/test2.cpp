// **********************************************
// 제 목 : 실습과제2
// 날 짜 : 2026년 3월26일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
class Circle {
private:
    int radius;    //멤버변수 private으로 설정    (함수로 접근한다)

public:
    Circle();
    void setRadius(int r);    //setter사용
    int getRadius();
};

Circle::Circle() {
    radius = 1;
}

void Circle::setRadius(int r) {
    if (r > 0) radius = r;
}

int Circle::getRadius() {
    return radius;
}

int main(){   
    Circle waffle;
    waffle.setRadius(5);
    cout << "원의 반지름은 " << waffle.getRadius() << endl;

    return 0;
}
