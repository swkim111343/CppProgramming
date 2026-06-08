// **********************************************
// 제 목 : 실습과제3
// 날 짜 : 2026년 6월 8일
// 작성자 : 2001485 김선우
// **********************************************
#include <iostream>
using namespace std;

class Power {
private:
    int kick;
    int punch;

public:
    // 생성자
    Power(int k = 0, int p = 0) {
        kick = k;
        punch = p;
    }

    // 객체 출력
    void show() {
        cout << "kick=" << kick
            << ",punch=" << punch << endl;
    }

    // 정수 * Power 연산자 오버로딩
    friend Power operator*(int n, Power p);
};

// friend 함수 정의
Power operator*(int n, Power p) {
    Power temp;

    temp.kick = n * p.kick;
    temp.punch = n * p.punch;

    return temp;
}

int main() {
    Power a(3, 5), b;

    a.show();
    b.show();

    b = 2 * a;      // 파워 객체와 정수 곱하기

    a.show();
    b.show();

    return 0;
}