#include <iostream>
using namespace std;

void func(int* num, int num1) {
	int power = 1;
	for (int i = 0; i < num1; i++)
		power *= *num;
	cout << power;
}

int main() {
	setlocale(LC_ALL, "Russian");

	//������ 1
	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* pArray = array;
	cout << "������1\n����������� ������:\n[";
	for (int i = 0; i < 10; i++)
		cout << *(pArray + i) << ", ";
	cout << "\b\b]\n";

	for (int i = 0; i < 9; i++)
		if (*(pArray + i) % 2 != 0 && *(pArray + i + 1) % 2 == 0)
			swap(*(pArray + i), *(pArray + i + 1));

	cout << "�������� ������:\n[";
		for (int i = 0; i < 10; i++)
			cout << *(pArray + i) << ", ";
	cout << "\b\b]\n\n";

	// ������ 2
	cout << "������ 2\n";
	int n = 10;
	func(&n, 3);



	return 0;
}