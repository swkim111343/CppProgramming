// **********************************************
// 제 목 : 실습과제3
// 날 짜 : 2026년 5월 14일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;

class MyStack {
    int* p;        // 동적 배열 포인터
    int size = 0;  // 스택 크기
    int tos = 0;   // 다음 저장 위치

public:
    // 기본 생성자
    MyStack() {
        size = 10;
        p = new int[size];
    }

    // 생성자
    MyStack(int size) {
        this->size = size;
        p = new int[size];
    }

    // 복사 생성자
    MyStack(const MyStack& src) {
        size = src.size;
        tos = src.tos;

        p = new int[size];

        for (int i = 0; i < tos; i++) {
            p[i] = src.p[i];
        }
    }

    // 소멸자
    ~MyStack() {
        delete[] p;
    }

    // push
    bool push(int n) {
        if (tos == size)
            return false;

        p[tos] = n;
        tos++;

        return true;
    }

    // pop
    bool pop(int& n) {
        if (tos == 0)
            return false;

        tos--;
        n = p[tos];

        return true;
    }
};

int main() {
    MyStack a(10); // 10개의 저장 공간을 가진 객체 생성

    a.push(10);
    a.push(20); // 스택 a에는 10, 20의 순서로 저장

    MyStack b = a; // 복사 생성

    b.push(30); // 스택 b에는 10, 20, 30 저장

    int n;

    a.pop(n);
    cout << "스택 a에서 팝한 값 " << n << endl;

    b.pop(n);
    cout << "스택 b에서 팝한 값 " << n << endl;

    return 0;
}