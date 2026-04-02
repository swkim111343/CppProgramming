// **********************************************
// 제 목 : 실습과제4
// 날 짜 : 2026년 4월2일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;

class Triangle {
private:
    int width;
    int height;

public:
    // 생성자
    Triangle(int w = 1, int h = 1) {
        this->width = w;
        this->height = h;
        cout << "밑변" << this->width << ",높이" << this->height << "인 삼각형 생성" << endl;
    }

    // 소멸자
    ~Triangle() {
        cout << "밑변" << this->width << ",높이" << this->height << "인 삼각형 소멸" << endl;
    }

    // 면적 함수
    double getArea() {
        return this->width * this->height / 2.0;
    }
};

int main() {
    // 객체 배열 생성 및 초기화
    Triangle tri[3] = { Triangle(2,2), Triangle(4,4), Triangle(6,6) };

    // 반복문으로 면적 출력
    for (int i = 0; i < 3; i++) {
        cout << "삼각형" << i << "의 면적은 " << tri[i].getArea() << endl;
    }

    return 0;
}