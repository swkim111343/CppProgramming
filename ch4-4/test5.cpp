// **********************************************
// 제 목 : 교재 4번
// 날 짜 : 2026년 4월13일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
#include <string>
#include <cctype>  // isalpha 함수 사용
using namespace std;

int main() {
    string input;   // 원본 문자열
    string result = ""; // 결과 문자열

    // 문자열 입력 (공백 포함)
    cout <<"텍스트 입력(한글안됨)>> ";
    getline(cin, input);

    // 문자열을 한 글자씩 검사
    for (int i = 0; i < input.length(); i++) {
        // 알파벳이거나 공백이면
        if (isalpha(input[i]) || input[i] == ' ') {
            result += input[i];  // 결과 문자열에 추가
        }
    }

    cout << result << endl;

    return 0;
}