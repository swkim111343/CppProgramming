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
private:
	int width, height;
	string place;
public:
	Picture();
	~Picture();
	Picture(int a, int b,string p);
	
	int getWidth();
	int getHeight();
	string getPlace();
};
Picture::Picture():Picture(5,7,"모름") {}
Picture::Picture(int a, int b,string p):width(a),height(b),place(p){}
Picture::~Picture(){}

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
	Picture pic;
	Picture mt(10, 14, "한라산");
	cout << pic.getWidth() << "X" << pic.getHeight() << " " << pic.getPlace() << endl;
	cout << mt.getWidth() << "X" << mt.getHeight() << " " << mt.getPlace() << endl;
}