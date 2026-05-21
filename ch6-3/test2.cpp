// **********************************************
// 제 목 : 실습과제2
// 날 짜 : 2026년 5월 21일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;

// 클래스 선언
class MyMath {
public:
    // 배열의 최대값 반환
    static int GetMax(int arr[], int size) {
        int max = arr[0];

        for (int i = 1; i < size; i++) {
            if (arr[i] > max)
                max = arr[i];
        }

        return max;
    }

    // 배열의 최소값 반환
    static int GetMin(int arr[], int size) {
        int min = arr[0];

        for (int i = 1; i < size; i++) {
            if (arr[i] < min)
                min = arr[i];
        }

        return min;
    }
};

int main() {
    int x[5] = { 20, 30, -5, 2, -30 };

    cout << "최대값은 : " << MyMath::GetMax(x, 5) << endl;
    cout << "최소값은 : " << MyMath::GetMin(x, 5) << endl;

    return 0;
}