// **********************************************
// 제 목 : 실습과제4 p.323 10번
// 날 짜 : 2026년 5월 21일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
#include <string>
using namespace std;

class Board {
private:
    static string posts[100]; // 게시글 저장
    static int count;         // 게시글 개수

    // 객체 생성 금지
    Board() {}

public:
    // 게시글 추가
    static void add(string text) {
        posts[count] = text;
        count++;
    }

    // 게시판 출력
    static void print() {
        cout << "************* 게시판입니다. ("
            << count << ") *************" << endl;

        for (int i = 0; i < count; i++) {
            cout << i + 1 << ": " << posts[i] << endl;
        }

        cout << "***************************************" << endl;
    }
};

// static 멤버 변수 초기화
string Board::posts[100];
int Board::count = 0;

int main() {
    // Board myBoard;  // 객체 생성 불가

    while (true) {
        int menu;
        string text;

        cout << "1:게시글 입력, 2:게시글 보기>>";
        cin >> menu;
        cin.ignore(1);

        switch (menu) {
        case 1:
            getline(cin, text); // 공백 포함 입력
            Board::add(text);
            break;

        case 2:
            Board::print();
            break;
        }
    }
}