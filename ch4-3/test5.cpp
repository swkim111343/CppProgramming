// **********************************************
// 제 목 : 실습과제5
// 날 짜 : 2026년 4월8일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;

class Sphere {
    int radius;

public:
    Sphere() { radius = 1; }  
    void setRadius(int r) {
        radius = r;
    }

    double getVolume() {
        return (4.0 / 3.0) * 3.14 * radius * radius * radius;
    }
};

int main() {
    int n, radius;

    cout << "생성하고자 하는 구의 개수: ";
    cin >> n;

    Sphere* pArray = new Sphere[n];

    for (int i = 0; i < n; i++) {
        cout << "구" << i + 1 << "의 반지름: ";
        cin >> radius;
        pArray[i].setRadius(radius);
    }

    for (int i = 0; i < n; i++) {
        cout << "구" << i + 1 << "의 부피 "
            << pArray[i].getVolume() << endl;
    }

    delete[] pArray;    

    return 0;
}