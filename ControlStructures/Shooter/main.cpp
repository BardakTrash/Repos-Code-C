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
			cout << "������" << endl;
		if (key == 97)
			cout << "������" << endl;
		if (key == 100)
			cout << "�����" << endl;
		if (key == 115)
			cout << "�����" << endl;
		if (key == 13)
			cout << "�����" << endl;
		if (key == 32)
			cout << "������" << endl;
	} while (key != 27);
}