// **********************************************
// 제 목 : 실습과제2
// 날 짜 : 2026년 5월 19일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
#include <string>
using namespace std;

// 정수형 big
int big(int a, int b) {
    return (a > b) ? a : b;
}

// 실수형 big
double big(double a, double b) {
    return (a > b) ? a : b;
}

// 문자열형 big
string big(string a, string b) {
    return (a > b) ? a : b;   // 사전식 비교
}

int main() {
    int x = big(10, 20);
    cout << "큰 정수값은 " << x << endl;

    double y = big(3.14, 1.05);
    cout << "큰 실수값은 " << y << endl;

    string z = big("hello", "world");
    cout << "사전에서 뒤에 나오는 단어는 " << z << endl;

    return 0;
}