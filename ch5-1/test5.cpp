// **********************************************
// 제 목 : 실습과제5
// 날 짜 : 2026년 5월6일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
#include <string>
using namespace std;

// 함수 선언
string GetLastString(string arr[], int size);

int main() {
    string names[5];

    for (int i = 0; i < 5; i++) {
        cout << "이름 >> ";
        getline(cin, names[i], '\n');
    }

    // 함수 호출
    string res = GetLastString(names, 5);

    cout << "사전에서 가장 뒤에 나오는 문자열은 "
        << res << endl;
}

// 함수 정의
string GetLastString(string arr[], int size)
{
    string maxStr = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > maxStr) {  // 사전식 비교
            maxStr = arr[i];
        }
    }

    return maxStr;
}