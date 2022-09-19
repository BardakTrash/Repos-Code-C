#include <iostream>
using namespace std;
using std::cin;
using std::cout;
//#define Triangle1
//#define Triangle2
//#define Triangle3
//#define Triangle4
//#define Triangle5
//#define Triangle6
//#define Rombus
//#define Shahmati
//#define plus_minus
//#define HardChess
int n, y, a, b, o;
void main()
{
    setlocale(LC_ALL, "Russian");
#ifdef Triangle1
    cout << "Введите размер: "; cin >> n;

    for (int i = n; i > 0; i--)
    {
        for (int j = n; j > 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;
#endif

#ifdef Triangle2
    cout << "Введи размер: "; cin >> n;
    katet = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j >= 0; j--)
        {
            if (j > n - katet)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
        katet--;
    }
#endif

#ifdef Triangle3
    cout << "Введите размер прямоугольника: "; cin >> n;

    for (int i = n; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
#endif

#ifdef Triangle4
    cout << "Введите размер прямоугольного треугольника: "; cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
#endif

#ifdef Triangle5
    cout << "Введите размер: "; cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
#endif

#ifdef Triangle6
    cout << "Введите число: "; cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)cout << "  ";
        for (int j = i; j < n; j++)cout << "* ";
        cout << endl;
    }
#endif

#ifdef Rombus
    cout << "Введите число: "; cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)cout << " "; cout << "/";
        for (int j = 0; j < i; j++)cout << "  "; cout << "\\";
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)cout << " "; cout << "\\";
        for (int j = i; j < n - 1; j++)cout << "  "; cout << "/";
        cout << endl;
    }
#endif

#ifdef plus_minus
    cout << "Плюс И Минус" << endl;
    cout << "Введите размер доски: "; cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            //(i % 2 == j % 2) ? cout << "+ " : cout << "- ";
            /*if (i % 2 == j % 2)cout << "+ ";else cout << "- ";*/
            //cout << ((i + j) % 2 == 0 ? "+ " : "- ");
            cout << (i % 2 ==  j % 2 ? "+ " : "- ");
        }
        cout << endl;
    }
    cout << endl;
#endif

#ifdef HardChess
    cout << "Создание шахмотной доски из звездочек" << endl;
    cout << "примечание:кол-во квадрата будет делить на размер клеток!!" << endl;
    cout << "Введите кол-во квадратов: "; cin >> n;
    cout << "Введите размер клеток: "; cin >> y ;
    cout << "Какой желаете отступ между квадратами (рекомендуется стандарт 1): "; cin >> o;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((j/y + i/y)&o)//& это отступ одного или нескольких квадратов может быть изменен
                cout << "* ";
            else
                cout << "  ";
            
        }
        cout << endl;
    }
#endif




}