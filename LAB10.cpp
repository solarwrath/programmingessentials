#include "pch.h"
#include <iostream>
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);

	double generatedArray[100];
	int n;
	cout << "Введіть n від 2 до 100: ";
	cin >> n;

	for (int currentIdx = 0; currentIdx < n; currentIdx++) {
		cout << "Введіть значення для " << (currentIdx + 1) << "-го елементу: " << endl;
		cin >> generatedArray[currentIdx];
	}

	double newArray[100];
	int pointerToEnd = 0;
	int quantityOfNulls = 0;

	for (int currentIdx = 0; currentIdx < n; currentIdx++) {
		if ((generatedArray[currentIdx] > 15.6) && (generatedArray[currentIdx] < 75)) {
			newArray[pointerToEnd] = generatedArray[currentIdx];
			pointerToEnd++;
		}

		if (generatedArray[currentIdx] == 0) {
			quantityOfNulls++;
		}
	}

	for (int currentIdx = 0; currentIdx < pointerToEnd; currentIdx++) {
		cout << "newArray[" << currentIdx << "] = " << newArray[currentIdx] << endl;
	}

	cout << "Кількість елементів массиву, які дорівніють 0: " << quantityOfNulls << endl;

	for (int currentIdx = 0; currentIdx < n; currentIdx++) {
		cout << "generatedArray[" << currentIdx << "] = " << generatedArray[currentIdx] << endl;
	}

	system("pause");
	return 0;
}