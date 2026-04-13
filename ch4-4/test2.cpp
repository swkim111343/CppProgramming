// **********************************************
// 제 목 : 실습과제2
// 날 짜 : 2026년 4월13일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;   // 사용자로부터 입력받을 문자열
    string result = ""; //누적 이어붙일 문자열   
    int count = 1;  //문자열앞에 붙일 번호

    while (true) {
        cout << "문자열 입력 : ";
        getline(cin, input);    //getline함수 입력받고

        if (input == "quit") {
            break;
        }

        result += "<" + to_string(count) + ">" + input; //문자열 누적 tostring은 정수를 문자열로 변환
        count++;

        cout << "이어진 문자열: " << result << endl;
    }

    return 0;
}