// **********************************************
// 제 목 : 교재 148페이지 1번
// 날 짜 : 2026년 4월16일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include<iostream>
#include<string>
using namespace std;
class Picture {
private:	//멤버변수 private으로 설정
	int width, height;
	string place;
public:
	Picture();	//생성자
	~Picture();	//소멸자
	Picture(int a, int b,string p);	//매개변수 생성자

	//getter함수(private에서 값을 가져옴)
	int getWidth();
	int getHeight();
	string getPlace();
};
Picture::Picture():Picture(5,7,"모름") {}	//기본 생성자(위임생성자)
Picture::Picture(int a, int b,string p):width(a),height(b),place(p){}	//타겟 ㅅㅐㅇ성자	
Picture::~Picture(){}	//소멸자(현재코드에선 아무역할X(소멸자 출력 정도?))

//private에서 데이터 읽기
int Picture::getWidth() {
	return width;
}
int Picture::getHeight() {
	return height;
}
string Picture::getPlace() {
	return place;
}

int main() {
	Picture pic;	//기본 생성자 호출
	Picture mt(10, 14, "한라산");	//바로 타겟생성자 호출
	cout << pic.getWidth() << "X" << pic.getHeight() << " " << pic.getPlace() << endl;
	cout << mt.getWidth() << "X" << mt.getHeight() << " " << mt.getPlace() << endl;
}
