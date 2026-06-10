// **********************************************
// 제 목 : 176~378 페이지 4번
// 날 짜 : 2026년 6월 10일
// 작성자 : 2001485 김선우
// **********************************************
//(1)
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

    // Coffee << Coffee
    Coffee& operator<<(const Coffee& c) {
        water += c.water;
        espresso += c.espresso;
        sugar += c.sugar;
        cream += c.cream;
        return *this;
    }

    // Coffee << int
    Coffee& operator<<(int n) {
        water += n;
        return *this;
    }
};

int main() {
    Coffee a(2,5,0,0), b(2,2,2,2);

    a << b << 3;

    a.show();

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
    friend Coffee& operator<<(Coffee&, const Coffee&);
    friend Coffee& operator<<(Coffee&, int);
};

// Coffee << Coffee
Coffee& operator<<(Coffee& a, const Coffee& b) {
    a.water += b.water;
    a.espresso += b.espresso;
    a.sugar += b.sugar;
    a.cream += b.cream;
    return a;
}

// Coffee << int
Coffee& operator<<(Coffee& a, int n) {
    a.water += n;
    return a;
}

int main() {
    Coffee a(2,5,0,0), b(2,2,2,2);

    a << b << 3;

    a.show();

    return 0;
}