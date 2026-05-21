// **********************************************
// 제 목 : 실습과제3
// 날 짜 : 2026년 5월 21일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;

// Triangle 클래스 선언
class Triangle {
private:
    static int numOfTriangles;

public:
    // 생성자
    Triangle() {
        numOfTriangles++;
    }

    // 소멸자
    ~Triangle() {
        numOfTriangles--;
    }

    // static 멤버 함수
    static int getNumofTriangle() {
        return numOfTriangles;
    }
};

// static 멤버변수 정의 및 초기화
int Triangle::numOfTriangles = 0;

int main() {
    Triangle* tri1 = new Triangle[5];

    cout << "생성된 삼각형의 개수:"
        << Triangle::getNumofTriangle() << endl;

    delete[] tri1;

    Triangle tri2[15];

    cout << "생성된 삼각형의 개수:"
        << Triangle::getNumofTriangle() << endl;

    return 0;
}