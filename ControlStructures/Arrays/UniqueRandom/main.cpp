#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//#define DZ_1
#define DZ_2
void main()
{
	setlocale(LC_ALL, "");
#ifdef DZ_1
	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	//����� �������:
	int number_of_shifts;
	cout << "������� ���-�� �������: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
	//����� ���������� ������� �� �����:
	for (int i = 0; i < n; i++)
	{

		cout << arr[i] << " ";

	}
	cout << endl;
#endif
#ifdef DZ_2
//� ��� � �� ����� ���� ����� �� ��������� �������� ������� � ���� ������ ���� �����
#endif


}