// **********************************************
// 제 목 : 교재 90페이지 10번
// 날 짜 : 2026년 4월14일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성

#include<iostream>
#include<string>
using namespace std;

int main() {
	string text;
	char a[100];
	int count = 0;

	cout << "영문텍스트 입력하시오(빈칸포함가능)>>";
	cin.getline(a, 100);
	for (int i = 0; a[i] != '\0'; i++) {
		if (i == 0 && a[i] != ' ') {
			count++;
		}
		if (a[i] != ' ' && a[i - 1] == ' ') {
			count++;
		}
	}
	cout << "단어의 개수는" << count << "개이다";
}