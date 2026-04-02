#include <iostream>
using namespace std;

class Triangle {
private:
    int width;
    int height;

public:
    Triangle(int w = 1, int h = 1) {
        this->width = w;
        this->height = h;
        cout << "밑변" << width << ",높이" << height << "인 삼각형 생성" << endl;
    }

    ~Triangle() {
        cout << "밑변" << width << ",높이" << height << "인 삼각형 소멸" << endl;
    }

    double getArea() {
        return width * height / 2.0;
    }
};

int main() {
    // 객체 배열 생성
    Triangle tri[3] = { Triangle(2,2), Triangle(4,4), Triangle(6,6) };

    // 객체 포인터
    Triangle* p = tri;

    cout << "방법1: (tri + i)-> " << endl;
    for (int i = 0; i < 3; i++)
        cout << (tri + i)->getArea() << endl;

    cout << "방법2: (p + i)-> " << endl;
    for (int i = 0; i < 3; i++)
        cout << (p + i)->getArea() << endl;

    cout << "방법3: p[i] " << endl;
    for (int i = 0; i < 3; i++)
        cout << p[i].getArea() << endl;

    cout << "방법4: 포인터 증가" << endl;
    for (int i = 0; i < 3; i++) {
        cout << p->getArea() << endl;
        p++;
    }

    return 0;
}