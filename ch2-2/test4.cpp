// **********************************************
// 제 목 : 교재 88p 4번
// 날 짜 : 2026년 4월14일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성

#include<iostream>
using namespace std;

int main() {
	double a[5];
	cout << "실수 5개>>";
	double sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
		if (a[i]>0) {
			sum = sum+ a[i];
		}

	}
	cout << sum;
}