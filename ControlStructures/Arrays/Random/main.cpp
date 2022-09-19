#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	int minRand, maxRand;
	do
	{
		cout << "Введиет минимальное случайное число: "; cin >> minRand;
		cout << "Введиет максимальное случайное число: "; cin >> maxRand;
		if (maxRand <= minRand)
		{

		}
	} while (maxRand + minRand);
		//Вывод исходного массива на экран
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand()%(maxRand - minRand) + minRand;
		}

		//Вывод отсорт массива на экран
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
}
/*
Звполнение массива случайными числами
Для того чтобы сгенерировать случайное число используется функция rand
rand возвращает псевдо случайное число в диапазоне от 0 до 32767 (RAND_MAX)
для того чтобы ограничеть случайные числа сверху используется операция 
*/

