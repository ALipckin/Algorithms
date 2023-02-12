#include <iostream>
#include <cstdlib>
using namespace std;

int search(int a[], int v, int l, int r) {
	while (r >= l) {
		int m = (l + r) / 2;
		if (v == a[m]) return m;
		if (v < a[m]) r = m - 1; else l = m + 1;
	}
	return -1;
}

int main() {
	srand(1);
	int m = 10;
	int a[10];
	for (int i = 0; i < m; ++i)
	{
		a[i] = rand() % 10;
		cout << " " << a[i];
	}
	cout << endl << search(a, 5, 0, 10) << endl;
}