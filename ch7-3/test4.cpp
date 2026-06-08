// **********************************************
// 제 목 : 실습과제4
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

    // 출력 함수
    void show() {
        cout << "kick=" << kick
            << ",punch=" << punch << endl;
    }

    // Power * int
    Power operator*(int n) {
        return Power(kick * n, punch * n);
    }

    // Power + Power
    Power operator+(Power op) {
        return Power(kick + op.kick,
            punch + op.punch);
    }

    // int * Power
    friend Power operator*(int n, Power op);
};

// friend 함수
Power operator*(int n, Power op) {
    return Power(n * op.kick,
        n * op.punch);
}

int main() {
    Power a(1, 1), b(2, 2), c;

    c.show();

    c = a * 2 + 2 * b;

    c.show();

    return 0;
}