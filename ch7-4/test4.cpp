// **********************************************
// 제 목 : 176~378 페이지 3번
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

    // ! 연산자 오버로딩
    // 설탕이 없으면 true 반환
    bool operator!() {
        return sugar == 0;
    }

    // > 연산자 오버로딩
    // 커피 양(espresso) 비교
    bool operator>(const Coffee& c) {
        return espresso > c.espresso;
    }
};

int main() {
    Coffee a(2, 5, 0, 0), b(2, 2, 2, 2);

    if (!a)
        cout << "No sugar!" << endl;

    if (a > b)
        cout << "커피 a가 양이 더 많아요." << endl;
    else
        cout << "커피 b가 양이 더 많아요." << endl;

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

    // friend 함수 선언
    friend bool operator!(const Coffee&);
    friend bool operator>(const Coffee&, const Coffee&);
};

// ! 연산자 오버로딩
// 설탕이 없으면 true 반환
bool operator!(const Coffee& c) {
    return c.sugar == 0;
}

// > 연산자 오버로딩
// 커피 양(espresso) 비교
bool operator>(const Coffee& a, const Coffee& b) {
    return a.espresso > b.espresso;
}

int main() {
    Coffee a(2,5,0,0), b(2,2,2,2);

    if(!a)
        cout << "No sugar!" << endl;

    if(a > b)
        cout << "커피 a가 양이 더 많아요." << endl;
    else
        cout << "커피 b가 양이 더 많아요." << endl;

    return 0;
}