// **********************************************
// 제 목 : 실습과제4
// 날 짜 : 2026년 4월7일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;

int main() {
    cout << "입력할 실수의 개수를 입력하세요: ";

    int n;
    cin >> n;

    if (n <= 0) return -1;

    // 동적 할당 (실수형)
    double* p = new double[n];

    if (!p) {
        cout << "메모리를 할당할 수 없습니다.";
        return -1;
    }

    cout << n << "개의 실수를 입력 하시오." << endl;

    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    // 최대값 찾기
    double max = p[0];
    for (int i = 1; i < n; i++) {
        if (p[i] > max) {
            max = p[i];
        }
    }

    cout << "최대값은 " << max << "입니다" << endl;

    // 메모리 해제
    delete[] p;

    return 0;
}