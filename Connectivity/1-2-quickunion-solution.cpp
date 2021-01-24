#include <iostream>
using namespace std;

static const int N = 1000;

int main()
{
	int j, i, p, q, id[N];

	for (i = 0; i < N; i++)
		id[i] = i;
	for (j = 0; j < N; j++)
		id[j] = j;

	while (cin >> p >> q)
	{
		for (i = p; i != id[i]; i = id[i]);
		for (j = q; j != id[j]; j = id[j]);
		if (i == j)continue;
		id[i] = j;
		cout << " " << p << " " << q << endl;
	}
}