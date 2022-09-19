#include<iostream>
#include <iostream>
#include <Windows.h>
//#define Arrays
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
#ifdef Arrays
	const int n = 5;
	int arr[n];
	arr[1] = 123;
	//Ввод массива с клавиатуры
	cout << "Введите элементы массива с клавиатуры: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];


	}
	//Вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";

	}
	cout << endl;


	//Вывод элементов масмсива на экран в обратном порядке:
	for (int i = n - 1; i >= 0; i--)
	{ 
		cout << arr[i] << "\t";
	
	}
	cout << endl;


	//Сумма элементов массива
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		
		sum += arr[i];

	}
	cout << "Сумма элементов массива: " << sum << endl;
	cout << "Средне арефметическое элементов массива: " << (double)sum / n << endl;

	//минимальное и максимальное значения в массиве:
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение в массиве: " << min << endl;
	cout << "Максимальное значение в массиве: " << max << endl;
#endif
}