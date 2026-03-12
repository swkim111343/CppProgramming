// **********************************************
// 제 목 : 실습과제3
// 날 짜 : 2026년 3월12일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include<iostream>
#include<string>
using namespace std;

int main() {
	int a;  //학번 정수형 
	string b, c;    //이름과 주소를 입력받을 문자열 string 함수

	cout << "학번을 입력하시오 :";
	cin >> a;
	cin.ignore();   //공백 포함 문자열 입력

	cout << "이름을 입력하시오 :";
    getline(cin, b);    //공백 포함 문자열 입력

    cout << "주소를 입력하시오 :";
    getline(cin, c);    // 공백 포함 문자열 입력
    
    //결과 출력
    cout << "1.학번:" << a << endl;
    cout << "2.이름:" << b << endl;
    cout << "3.주소:" << c << endl;

    return 0;

}