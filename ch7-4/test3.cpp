// **********************************************
// 제 목 : 176~378 페이지 2번
// 날 짜 : 2026년 6월 10일
// 작성자 : 2001485 김선우
// **********************************************
//(1)
#include <iostream>
using namespace std;

class Coffee {
    int water, espresso, sugar, cream;

public:
    Coffee(int water = 1, int coffee = 1, int sugar = 0, int cream = 0) {
        this->water = water;
        this->espresso = coffee;
        this->sugar = sugar;
        this->cream = cream;
    }

    void show() {
        cout << "물 " << water
             << ", 커피 " << espresso
             << ", 설탕 " << sugar
             << ", 크림 " << cream << endl;
    }

    // friend 함수 선언
    friend Coffee& operator+=(Coffee&, const Coffee&);
    friend Coffee& operator+=(Coffee&, int);
    friend Coffee operator++(Coffee&, int);
};

// Coffee += Coffee
Coffee& operator+=(Coffee& a, const Coffee& b) {
    a.water += b.water;
    a.espresso += b.espresso;
    a.sugar += b.sugar;
    a.cream += b.cream;
    return a;
}

// Coffee += int
Coffee& operator+=(Coffee& a, int n) {
    a.espresso += n;
    return a;
}

// 후위 증가 연산자
Coffee operator++(Coffee& a, int) {
    Coffee temp = a;   // 증가 전 객체 저장
    a.espresso++;      // 커피 양 1 증가
    return temp;       // 증가 전 객체 반환
}

int main() {
    Coffee black(2, 5, 0, 0), dabang(2, 2, 2, 2);

    black += dabang;
    black += 1;
    black++;

    black.show();

    return 0;
}


//(2)
#include <iostream>
using namespace std;

class Coffee {
    int water, espresso, sugar, cream;

public:
    // 생성자
    Coffee(int water = 1, int coffee = 1, int sugar = 0, int cream = 0) {
        this->water = water;
        this->espresso = coffee;
        this->sugar = sugar;
        this->cream = cream;
    }

    // 커피 정보 출력
    void show() {
        cout << "물 " << water
             << ", 커피 " << espresso
             << ", 설탕 " << sugar
             << ", 크림 " << cream << endl;
    }

    // friend 함수 선언
    friend Coffee& operator+=(Coffee&, const Coffee&);
    friend Coffee& operator+=(Coffee&, int);
    friend Coffee operator++(Coffee&, int);
};

// Coffee += Coffee
// 두 커피의 재료를 더하여 a에 저장
Coffee& operator+=(Coffee& a, const Coffee& b) {
    a.water += b.water;
    a.espresso += b.espresso;
    a.sugar += b.sugar;
    a.cream += b.cream;
    return a;
}

// Coffee += int
// 커피 양(espresso)만 n만큼 증가
Coffee& operator+=(Coffee& a, int n) {
    a.espresso += n;
    return a;
}

// 후위 증가 연산자 (a++)
Coffee operator++(Coffee& a, int) {
    Coffee tmp = a;  // 증가 전 상태 저장
    a.espresso++;    // 커피 양 1 증가
    return tmp;      // 증가 전 객체 반환
}

int main() {
    Coffee black(2, 5, 0, 0), dabang(2, 2, 2, 2);

    black += dabang;
    black += 1;
    black++;

    black.show();

    return 0;
}