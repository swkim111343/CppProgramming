// **********************************************
// 제 목 : 교재 8번
// 날 짜 : 2026년 4월13일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
#include <string>
using namespace std;

int main() {
    string url;

    while (true) {
        cout << "웹주소입력>>";
        getline(cin, url);

        // 종료 조건
        if (url == "그만") {
            break;
        }

        // 1️ 프로토콜 분리
        int pos = url.find("://");
        string protocol = url.substr(0, pos);

        // 나머지 부분
        string rest = url.substr(pos + 3);

        // 2️ '/' 위치 찾기
        int slashPos = rest.find('/');

        string hostPort;
        string path;

        // '/'가 없는 경우
        if (slashPos == string::npos) {
            hostPort = rest;
            path = "/";  // 기본값
        }
        else {
            hostPort = rest.substr(0, slashPos);
            path = rest.substr(slashPos);
        }

        // 3️ 포트 분리
        int colonPos = hostPort.find(':');

        string host;
        string port;

        if (colonPos == string::npos) {
            host = hostPort;
            port = "80";  // 기본 포트
        }
        else {
            host = hostPort.substr(0, colonPos);
            port = hostPort.substr(colonPos + 1);
        }

        // 출력
        cout << "프로토콜: " << protocol << endl;
        cout << "호스트: " << host << endl;
        cout << "포트: " << port << endl;
        cout << "나머지부분: " << path << endl;
    }

    return 0;
}