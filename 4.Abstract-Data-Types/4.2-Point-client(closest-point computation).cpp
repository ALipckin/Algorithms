#include <iostream>
#include <stdlib.h>
#include "POINT.cxx"
using namespace std;

int main()
{ float d = atof(argv[2]);
  int i,cnt = 0, N = atoi(argv[1]);
  POINT *a = new POINT[N];
  for(i = 0; i < N; i++)
    for(int j = i+1; j < N; j++)
      if(a[i].distance(a[j])< d) cnt++;
      cout<<cnt<<"pairs in a radius"
    return 0;
}
