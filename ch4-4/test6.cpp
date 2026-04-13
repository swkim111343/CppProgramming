// **********************************************
// 제 목 : 교재 5번
// 날 짜 : 2026년 4월13일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;

class Container {
    int* p;   // 동적 배열 포인터
    int size; // 배열 크기

public:
    // 생성자 size 크기만큼 배열 생성
    Container(int size) {
        this->size = size;
        p = new int[size];
    }

    // 소멸자 메모리 해제
    ~Container() {
        delete[] p;
    }

    // 정수 입력
    void read() {
        cout << "정수 " << size << "개입력>>";
        for (int i = 0; i < size; i++) {
            cin >> p[i];
        }
    }

    // 배열 출력
    void write() {
        for (int i = 0; i < size; i++) {
            cout << p[i] << " ";
        }
        cout << endl;
    }

    // 오른쪽으로 1칸 회전
    void rotate() {
        int temp = p[size - 1]; // 마지막 값 저장

        // 뒤에서부터 한 칸씩 이동
        for (int i = size - 1; i > 0; i--) {
            p[i] = p[i - 1];
        }

        p[0] = temp; // 맨 앞에 마지막 값 넣기
    }

    // 평균 계산
    double avg() {
        int sum = 0;

        for (int i = 0; i < size; i++) {
            sum += p[i];
        }

        return (double)sum / size; // 실수형 평균
    }
};

int main() {
    Container c(10);  // 객체 생성

    c.read();
    c.write();

    c.rotate();
    c.write();

    cout << "평균은 " << c.avg() << endl;

    return 0;
}