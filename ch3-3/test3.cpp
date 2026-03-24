// **********************************************
// 제 목 : 실습과제3
// 날 짜 : 2026년 3월24일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;

class Triangle {
private:
    int base;
    int height;

public:
    Triangle(int b, int h) {
        base = b;
        height = h;
        cout << "밑변 " << base << "높이 " << height << "인 삼각형 생성" << endl;
    }

    double getArea() {
        return base * height / 2.0;
    }

    ~Triangle() {
        cout << "밑변 " << base << "높이 " << height << "인 삼각형 소멸" << endl;
    }
};

//전역객체 (순서 중요) 실행결과가 다른 이유는 README파일에 실행결과와 함께 설명
Triangle tri1(4, 8);
Triangle tri2(2, 2);

int main() {
    //출력 순서 중요
    cout << "삼각형의 면적은 " << tri2.getArea() << endl;
    cout << "삼각형의 면적은 " << tri1.getArea() << endl;
    return 0;
}
