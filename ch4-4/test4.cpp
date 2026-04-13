// **********************************************
// 제 목 : 교재 2번
// 날 짜 : 2026년 4월13일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;

int main() {
    int n;  // 물품 개수

    // 물품 개수 입력
    cout << "구입할 물품의 개수>> ";
    cin >> n;

    // 동적 배열 생성 (크기 n)
    int* price = new int[n];

    // 가격 입력
    cout << "물품 6개의 가격 입력>>";
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }

    // 최대값, 최소값 초기화 (첫 번째 값으로 설정)
    int max = price[0];
    int min = price[0];

    // 배열 순회하면서 최대/최소 찾기
    for (int i = 1; i < n; i++) {
        if (price[i] > max) {
            max = price[i];
        }
        if (price[i] < min) {
            min = price[i];
        }
    }

    cout << "가장 싼 가격은 " << min << endl;
    cout << "가장 비싼 가격은 " << max << endl;

    // 동적 메모리 해제
    delete[] price;

    return 0;
}