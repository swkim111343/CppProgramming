// **********************************************
// 제 목 : 실습과제2
// 날 짜 : 2026년 5월 14일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Person { // Person 클래스 선언
    string name;
    int id;

public:
    Person(int id, string name); // 생성자
    void changeName(string name);
    void show() { cout << id << ", " << name << endl; }
};

Person::Person(int id, string name) { // 생성자
    this->id = id;
    this->name = name;
}

void Person::changeName(string name) {
    this->name = name;
}

int main() {
    Person father(1, "Kitae"); // father 객체 생성
    Person daughter(father);  // 복사 생성자 호출 (컴파일러 기본 복사 생성자 사용)

    cout << "daughter 객체 생성 직후 ----" << endl;
    father.show();
    daughter.show();

    daughter.changeName("Grace");

    cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
    father.show();
    daughter.show();

    return 0;
}