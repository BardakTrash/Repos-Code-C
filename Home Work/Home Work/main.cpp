#include<iostream>
//#define DZ_1 
//#define DZ_2
//#define DZ_3
//#define DZ_4
using namespace std;
void main()
{
    setlocale(LC_ALL, "Russian");
#if defined DZ_1
    double Money, b;
    int a;
    cout << "������� ������� �����: ";
    cin >> Money;
    a = Money;
    b = (Money - a) * 100;
    cout << Money << " - ��� " << a << " ������ " << b << " ������" << endl;
    return 0;
#endif
#if defined DZ_2
    int Price_T;
    int �mount_T;
    int Price_K;
    int Amount_K;
    int Cost;
    cout << "������� ����" << endl;
    cout << "���� ��������: ";
    cin >> Price_T;
    cout << "����� ��������: ";
    cin >> �mount_T;
    cout << "���� ���������: ";
    cin >> Price_K;
    cout << "����� ����������: ";
    cin >> Amount_K;
    Cost = Price_T * �mount_T + Price_K * Amount_K;
    cout << "��������� �������: " << Cost << "������" << endl;
    return 0;
#endif
#if defined DZ_3
    int Price_T;
    int �mount_T;
    int Price_O;
    int Amount_O;
    int Cost;
    cout << "������� ����������� ������" << endl;
    cout << "���� �������: ";
    cin >> Price_T;
    cout << "����� ��������: ";
    cin >> �mount_T;
    cout << "���� �������: ";
    cin >> Price_O;
    Amount_O = �mount_T;
    Cost = Price_T * �mount_T + Price_O * Amount_O;
    cout << "��������� �������: " << Cost << "������" << endl;
    return 0;
#endif
#if defined DZ_4
    int Road;
    int Expenses;
    int Price_T;
    int Cost;
    cout << "������� ����������� ������" << endl;
    cout << "���������� �� ����: ";
    cin >> Road;
    cout << "������ ������� �� 100��: ";
    cin >> Expenses;
    cout << "���� �������: ";
    cin >> Price_T;
    Cost = 2 * Road / 100 * Expenses * Price_T;
    cout << "������� �� ���� � ������� �������� �: " << Cost << "������" << endl;
    return 0;
#endif
}