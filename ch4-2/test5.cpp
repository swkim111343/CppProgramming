// **********************************************
// 제 목 : 실습과제5
// 날 짜 : 2026년 4월7일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
using namespace std;

int main() {
    cout << "저장할 문자열의 크기를 입력하세요: ";

    int n;
    cin >> n;

    if (n <= 0) return -1;

    // 널문자까지 고려해서 +1
    char* str = new char[n + 1];

    if (!str) {
        cout << "메모리를 할당할 수 없습니다.";
        return -1;
    }

    cout << "문자열을 입력하시오: ";

    cin.ignore(); // 이전 입력(엔터) 제거
    cin.getline(str, n + 1); // 문자열 입력

    cout << "입력한 문자열은 " << str << "입니다." << endl;

    // 메모리 해제
    delete[] str;

    return 0;
}