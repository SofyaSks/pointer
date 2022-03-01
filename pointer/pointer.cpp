#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	/*int n = 10, m = 15;
	
	
	int* pn;
	pn = &n;
	cout << pn << endl;
	
	int sum = *pn + 10;
	cout << sum << endl;
	*pn = -7;
	cout << n << endl; 
	cout << "---\n";
	//pn = &m;
	//cout << pn << endl;
	int* pm = &m;
	cout << *pm << endl;*/

	/*int arr[5]{ 1, 2, 3, 4, 5 };
	cout << arr[0] << endl;
	int *parr = arr;
	//cout << *(parr + 1) << endl;
	//int* parr3 = &arr[3];
	//cout << *(parr3 - 1) << endl;
	cout << "Изначальный массив: \n[";
	for (int i = 0; i < 5; i++)
		cout << *(parr + i) << ", ";
	cout << "\b\b]\n";

	int sum = *(parr + 2) + *(parr + 4);
	cout << sum << endl;

	*parr = 10;
	*(parr + 3) = 55;
	cout << "Итоговый массив: \n[";
	for (int i = 0; i < 5; i++)
		cout << *(arr + i) << ", ";
	cout << "\b\b]\n";*/


	// Задание дз 14.1
	cout << "Изначальный массив: \n[";
	int z14[10];
	int* pz14 = &z14[0]; //int* pz14 = &z14;
	for (int i = 0; i < 10; i++) {
		*(pz14 + i) = rand() % 10 + 1;
		cout << *(pz14 + i) << ", ";
	}
	cout << "\b\b]\n";
	int sum = 0, count = 0;
	for (int i = 0; i < 10; i++)
		if (*(z14 + i) % 2 == 0) {
			count++;
			sum += *(z14 + i);
		}
	cout << "Сумма = " << sum << "\n";
	cout << "Среднее = " << sum  / count << "\n";


	return 0;
}