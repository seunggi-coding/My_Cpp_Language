#include <iostream>
using namespace std;

class ArrayUtility2 {
public:
	static int* concat(int s1[], int s2[], int size);
	static int* remove(int s1[], int s2[], int size, int& retSize);
};

int* ArrayUtility2::concat(int s1[], int s2[], int size) {
	int* arr = new int[size * 2];
	for (int i = 0; i < size; i++) {
		arr[i] = s1[i];
		arr[i + size] = s2[i];
	}
	return arr;
}

int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (s1[i] == s2[j]) {
				count++;
				break;
			}
		}
	}
	retSize = size - count;
	if (retSize == 0)
		return NULL;
	int* s3 = new int[retSize];
	count = 0;
	int sw = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (s1[i] == s2[j]) {
				sw++;
			}
		}
		if (!sw) {
			s3[count] = s1[i];
			count++;
		}
	}
	return s3;
}

int main() {
	ArrayUtility2 unit;
	int x[5], y[5];
	int size;
	int count = 5;

	cout << "������ 5 �� �Է��϶�. �迭 x�� �����Ѵ�>> ";
	for (int i = 0; i < 5; i++)
		cin >> x[i];
	cout << endl;

	cout << "������ 5 �� �Է��϶�. �迭 y�� �����Ѵ�>> ";
	for (int i = 0; i < 5; i++)
		cin >> y[i];
	cout << endl;

	int *z;
	z = unit.concat(x, y, 5);
	cout << "��ģ ���� �迭�� ����Ѵ�" << endl;
	for (int k = 0; k < 10; k++) {
		cout << z[k] << ' ';
	}
	cout << endl;

	int retSize;
	z = unit.remove(x, y, 5, retSize);
	cout << "�迭 x[]���� y[]�� �� ����� ����Ѵ�. ������ " << retSize << endl;
	for (int n = 0; n < retSize; n++) {
		cout << z[n] << ' ';
	}
	cout << endl;
}