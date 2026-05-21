// **********************************************
// 제 목 : 실습과제4 p.323 5번
// 날 짜 : 2026년 5월 21일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;

class Vector {
    int* mem;   // 동적 배열
    int size;   // 배열 크기

public:
    // 기본 생성자 : 크기 5, 값 0
    Vector() {
        size = 5;
        mem = new int[size];

        for (int i = 0; i < size; i++)
            mem[i] = 0;
    }

    // 생성자 : 크기와 초기값 지정
    Vector(int s, int value) {
        size = s;
        mem = new int[size];

        for (int i = 0; i < size; i++)
            mem[i] = value;
    }

    // 소멸자
    ~Vector() {
        delete[] mem;
    }

    // 전체 출력
    void show() {
        for (int i = 0; i < size; i++)
            cout << mem[i] << " ";
        cout << endl;
    }

    // 앞의 n개 출력
    void show(int n) {
        for (int i = 0; i < n; i++)
            cout << mem[i] << " ";
        cout << endl;
    }
};

int main() {
    Vector x;          // 5 크기의 동적 배열을 할당하고 0으로 초기화
    Vector y(10, 8);   // 10 크기의 동적 배열을 할당하고 8로 초기화

    x.show();   // 벡터 x 출력
    y.show();   // 벡터 y 출력
    y.show(3);  // 벡터 y의 앞의 3개 출력
}