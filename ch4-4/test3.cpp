// **********************************************
// 제 목 : 실습과제3
// 날 짜 : 2026년 4월13일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;   // 입력받을 문자열
    int count = 0; // a의 개수를 저장할 변수

    cout << "문자열 입력 : ";

    // 공백 포함 한 줄 입력
    getline(cin, str);

    // 문자열 길이만큼 반복
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'a') {
            count++;
        }
    }

    cout << "문자 a는 " << count << "개 있습니다," << endl;

    return 0;
}