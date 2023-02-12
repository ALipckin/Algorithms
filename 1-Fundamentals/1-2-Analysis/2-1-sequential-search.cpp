#include <iostream>
#include <cstdlib>
using namespace std;


int search(int a[], int v, int l, int r) {
	for (int i = l; i <= r; i++)
		if (v == a[i]) return i;
	return -1;
}

int main()
{
	srand(1);
	int m = 10;
	int a[10];
	for (int i = 0; i < m; ++i)
	{
		a[i] = rand() % 10;
		cout << " " << a[i] << endl;
	}
	cout << " " << endl;
	cout << search(a, 5, 0, 10) << endl;
}