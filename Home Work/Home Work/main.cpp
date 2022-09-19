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
    cout << "Введите дробное число: ";
    cin >> Money;
    a = Money;
    b = (Money - a) * 100;
    cout << Money << " - это " << a << " Рублей " << b << " Копеек" << endl;
    return 0;
#endif
#if defined DZ_2
    int Price_T;
    int Аmount_T;
    int Price_K;
    int Amount_K;
    int Cost;
    cout << "Введите цены" << endl;
    cout << "Цена тетрадей: ";
    cin >> Price_T;
    cout << "Число тетрадей: ";
    cin >> Аmount_T;
    cout << "Цена карандаша: ";
    cin >> Price_K;
    cout << "Число карандашей: ";
    cin >> Amount_K;
    Cost = Price_T * Аmount_T + Price_K * Amount_K;
    cout << "Стоимость покупки: " << Cost << "Рублей" << endl;
    return 0;
#endif
#if defined DZ_3
    int Price_T;
    int Аmount_T;
    int Price_O;
    int Amount_O;
    int Cost;
    cout << "Введите необходимые данные" << endl;
    cout << "Цена тетради: ";
    cin >> Price_T;
    cout << "Число тетрадей: ";
    cin >> Аmount_T;
    cout << "Цена обложки: ";
    cin >> Price_O;
    Amount_O = Аmount_T;
    Cost = Price_T * Аmount_T + Price_O * Amount_O;
    cout << "Стоимость покупки: " << Cost << "Рублей" << endl;
    return 0;
#endif
#if defined DZ_4
    int Road;
    int Expenses;
    int Price_T;
    int Cost;
    cout << "Введите необходимые данные" << endl;
    cout << "Расстояние до дачи: ";
    cin >> Road;
    cout << "Раскод топлива на 100км: ";
    cin >> Expenses;
    cout << "Цена топлива: ";
    cin >> Price_T;
    Cost = 2 * Road / 100 * Expenses * Price_T;
    cout << "Поездка на дачу и обратно обойдётся в: " << Cost << "Рублей" << endl;
    return 0;
#endif
}