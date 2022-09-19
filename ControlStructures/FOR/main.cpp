#include<iostream>
using namespace std;
using std::cout;
#define PYTHAGORAS_TABLE
#define SIMPLE_NUMBER
#define TRIADA
#define CHESS
#define UPPER_LEFT_ANGLE  (char)218
#define UPPER_righ_ANGLE  (char)191
#define LOVER_left_ANGLE  (char)192
#define LOVER_righ_ANGLE  (char)217
#define HORIZ_LINE_ANGLE  (char)196
#define VERT_LINE_ANGLE   (char)179
#define WHITE_BOX         "\xDB\xDB"
#define BLACK_BOX     
void main()
{
	setlocale(LC_ALL, "");
#ifdef PYTHAGORAS_TABLE
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i << " * " << j << " = " << i*j << endl;
		}
	}
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;
	}
#endif
#ifdef SIMPLE_NUMBER
	int n;
	cout << "¬ведите предельное число: "; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		bool simple = true;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}
		}
		if(simple)cout << i << "\t";
	}
	cout << endl;
#endif
#ifdef TRIADA
	int n;
	cout << "¬ведите предельное число: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; c = (a = b) + (b = c))
	{
		cout << a << "\t";
	}
	cout << endl;
#endif
#ifdef CHESS
	int n;
	cout << "¬ведите размер доски: ";
	setlocale(LC_ALL, "C");
	cin >> n;
	n++;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n) cout << UPPER_righ_ANGLE;
			else if (i == n && j == 0) cout << LOVER_left_ANGLE;
			else if (i == n && j == n) cout << LOVER_righ_ANGLE;
			else if (i == 0 || i == n) cout << HORIZ_LINE_ANGLE << HORIZ_LINE_ANGLE;
			else if (j == 0 || j == n) cout << VERT_LINE_ANGLE;
			else cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX);

		}
		cout << endl;
	}
#endif
}