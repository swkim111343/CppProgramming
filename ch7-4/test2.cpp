// **********************************************
// 제 목 : 176~378 페이지 1번
// 날 짜 : 2026년 6월 10일
// 작성자 : 2001485 김선우
// **********************************************
//(1)
#include <iostream>
using namespace std;

// 커피의 재료 정보를 저장하는 클래스
class Coffee {
    int water;      // 물의 양
    int espresso;   // 커피의 양
    int sugar;      // 설탕의 양
    int cream;      // 크림의 양

public:
    // 생성자
    // 객체 생성 시 재료의 양을 초기화
    Coffee(int water = 1, int coffee = 1, int sugar = 0, int cream = 0) {
        this->water = water;
        this->espresso = coffee;
        this->sugar = sugar;
        this->cream = cream;
    }

    // 커피 재료 출력
    void show() {
        cout << "물 " << water
            << ", 커피 " << espresso
            << ", 설탕 " << sugar
            << ", 크림 " << cream << endl;
    }

    // Coffee + Coffee 연산자 오버로딩
    // 두 커피의 재료를 각각 더한 새로운 Coffee 객체 반환
    Coffee operator+(const Coffee& c) {
        return Coffee(
            water + c.water,         // 물 더하기
            espresso + c.espresso,   // 커피 더하기
            sugar + c.sugar,         // 설탕 더하기
            cream + c.cream          // 크림 더하기
        );
    }

    // Coffee + int 연산자 오버로딩
    // 커피(espresso) 양만 n만큼 증가시킨 새 객체 반환
    Coffee operator+(int n) {
        return Coffee(
            water,           // 물은 그대로
            espresso + n,    // 커피만 증가
            sugar,           // 설탕은 그대로
            cream            // 크림은 그대로
        );
    }
};

int main() {
    Coffee a(1, 2, 1, 0);
    Coffee b(2, 3, 0, 1);

    Coffee c = a + b;  // Coffee + Coffee
    c.show();

    Coffee d = a + 3;  // Coffee + int
    d.show();

    return 0;
}


//(2)
#include <iostream>
using namespace std;

// 커피의 재료 정보를 저장하는 클래스
class Coffee {
    int water;      // 물
    int espresso;   // 커피
    int sugar;      // 설탕
    int cream;      // 크림

public:
    // 생성자
    Coffee(int water = 1, int coffee = 1, int sugar = 0, int cream = 0) {
        this->water = water;
        this->espresso = coffee;
        this->sugar = sugar;
        this->cream = cream;
    }

    // 커피 재료 출력
    void show() {
        cout << "물 " << water
             << ", 커피 " << espresso
             << ", 설탕 " << sugar
             << ", 크림 " << cream << endl;
    }

    // friend 함수 선언
    friend Coffee operator+(const Coffee&, const Coffee&);
    friend Coffee operator+(const Coffee&, int);
};

// Coffee + Coffee
// 두 커피의 재료를 각각 더한 새로운 Coffee 객체 반환
Coffee operator+(const Coffee& a, const Coffee& b) {
    return Coffee(
        a.water + b.water,
        a.espresso + b.espresso,
        a.sugar + b.sugar,
        a.cream + b.cream
    );
}

// Coffee + int
// 커피 양(espresso)만 n만큼 증가시킨 새로운 Coffee 객체 반환
Coffee operator+(const Coffee& a, int n) {
    return Coffee(
        a.water,
        a.espresso + n,
        a.sugar,
        a.cream
    );
}

int main() {
    Coffee java(1, 2, 1, 0);
    Coffee mocha(2, 3, 0, 1);

    Coffee mix = java + mocha; // Coffee + Coffee
    mix.show();

    Coffee strong = java + 3;  // Coffee + int
    strong.show();

    return 0;
}