#include <iostream>
#include <stdio.h>

using namespace std;

int **a = malloc2d(M, N);

int main()
{  
    cout<<maloc2d;
    return 0;
}

int maloc2d()
{   int **t = new int*[r];
    for(int i = 0; i < r; i++)
      t[i] = new int[c];
    return t;
}

