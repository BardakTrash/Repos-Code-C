#include<iostream>
#include<conio.h>
using namespace std;
#define Escape 27

void main()
{
	setlocale(LC_ALL, "");

	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		if (key == 119)
			cout << "Вперед" << endl;
		if (key == 97)
			cout << "Вправо" << endl;
		if (key == 100)
			cout << "Влево" << endl;
		if (key == 115)
			cout << "Назад" << endl;
		if (key == 13)
			cout << "Огонь" << endl;
		if (key == 32)
			cout << "Прыжок" << endl;
	} while (key != 27);
}