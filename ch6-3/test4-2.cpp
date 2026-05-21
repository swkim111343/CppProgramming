// **********************************************
// 제 목 : 실습과제4 p.323 8번
// 날 짜 : 2026년 5월 21일
// 작성자 : 2001485 김선우
// **********************************************
// 소스코드 작성
#include <iostream>
#include <string>
using namespace std;

class WordUtility {
public:
    // 단어 개수 반환
    static int wordCount(string str) {
        int count = 0;
        bool inWord = false;

        for (int i = 0; i < str.length(); i++) {
            if (str[i] != ' ' && !inWord) {
                count++;
                inWord = true;
            }
            else if (str[i] == ' ') {
                inWord = false;
            }
        }
        return count;
    }

    // n번째 단어 반환
    static string getWord(string str, int n) {
        int count = 0;
        string word = "";

        for (int i = 0; i <= str.length(); i++) {
            if (i == str.length() || str[i] == ' ') {
                if (word != "") {
                    count++;

                    if (count == n)
                        return word;

                    word = "";
                }
            }
            else {
                word += str[i];
            }
        }

        return "";
    }
};

int main() {
    int n = WordUtility::wordCount("I love C++");
    cout << "단어 개수는 " << n << endl;

    string word = WordUtility::getWord("I love C++", 3);

    if (word == "")
        cout << "3번째 단어는 없습니다." << endl;
    else
        cout << "3번째 단어는 " << word << endl;
}