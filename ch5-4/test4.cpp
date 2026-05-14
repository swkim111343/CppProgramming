// **********************************************
// 제 목 : 실습과제4
// 날 짜 : 2026년 5월 14일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;

class Collector {
    int* p;
    int size = 0;

public:
    // 생성자
    Collector(int size, int values[]);

    // show 함수
    void show();

    int getSize() {
        return size;
    }

    int get(int index) {
        return p[index];
    }
};

// 생성자 구현
Collector::Collector(int size, int values[]) {

    this->size = size;

    p = new int[size];

    for (int i = 0; i < size; i++) {
        p[i] = values[i];
    }
}

// show 함수 구현
void Collector::show() {

    cout << "데이터수 " << size << " : ";

    for (int i = 0; i < size; i++) {
        cout << p[i] << " ";
    }

    cout << endl;
}

// 외부 함수
double calcAvg(Collector& c) {

    double sum = 0;

    for (int i = 0; i < c.getSize(); i++) {
        sum += c.get(i);
    }

    return sum / c.getSize();
}

int main() {

    int temp[] = { 69,70,71,72,74 };

    Collector weight(4, temp);

    double avg = calcAvg(weight);

    weight.show();

    cout << "평균은 " << avg << endl;

    return 0;
}

/*
정상 종료가 발생하는 이유는 p가 초기화되지 않았기 때문

현재 클래스에서 int* p; 만 선언되어 있고 초기값이 없다.

만약 객체 생성 과정에서 문제가 생기거나 p가 쓰레기 값을 가지는 상태에서 소멸자가 실행되면
delete[] p; 가 잘못된 메모리를 해제하려고 해서 오류가 발생한다.
*/