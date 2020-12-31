#include <iostream>
using namespace std;

class ArrayUtility2 {
public:
	static int* remove(int s1[], int s2[], int size, int& retSize);
};

int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize) {	//delete []를 언제할지 생각하기 (main 맨 마지막)
	int* remain = new int[size];
	int count = 0;
	for (int i = 0; i < size; i++) {
		int j;
		for (j = 0; j < size; j++) {
			if (s1[i] == s2[j]) {
				break;
			}
		}
		if (j == size) {
			remain[count] = s1[i];
			count++;
		}
	}
	retSize = count;

	if (retSize == 0)
		return NULL;

	return remain;
}

int main() {
	
	delete[] remain;
	return 0;
}