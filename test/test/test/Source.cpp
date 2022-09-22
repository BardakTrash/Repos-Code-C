#include <iostream>
using namespace std;

int main()
{
	const int k = 5;
	int mas[k] = { 1, 2, 4, 9, 0, 7 };
	for (int i = 0; i < k; i += 3)
		cout << mas[i] << " ";
	return 0;
}