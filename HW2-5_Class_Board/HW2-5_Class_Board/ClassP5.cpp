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
	cout << "************* �Խ����Դϴ�. *************\n";
	for (int i = 0; i < a; i++) {
		cout << i << ": " << str[i] << endl;
	}
	cout << endl;
}

int main() {
	Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���.");
	Board::print();
}