#include <iostream>
#include <string>
using	namespace std;

class Board {
public:
	static int a;
	static string* str;
	static void add(string s);
	static void print();
};

int Board::a = 0;
string* Board::str = new string[100];

void Board::add(string s){
	str[a] = s;
	a++;
}

void Board::print() {
	cout << "************* 게시판입니다. *************\n";
	for (int i = 0; i < a; i++) {
		cout << i << ": " << str[i] << endl;
	}
	cout << endl;
}

int main() {
	Board::add("중간고사는 감독 없는 자율 시험입니다.");
	Board::add("코딩 라운지 많이 이용해 주세요.");
	Board::print();
	Board::add("진소린 학생이 경진대회 입상하였습니다. 축하해주세요.");
	Board::print();
}