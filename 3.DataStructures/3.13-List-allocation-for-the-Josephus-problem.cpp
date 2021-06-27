#include <iostream>
#include <stdio.h>
#include <list.h>

using namespace std;
int main()
{
    int i, N;
    cin>>i;
    i=N;
    Node t, x;
    construct(N);
    for(i = 2, x = newNode(1); i<=N;i++)
    { t = newNode(i); insert(x, t); x = t;
  while(x!=next(x))
  { for(i = 1;i < M; i++)x = next(x);
      deleteNode(remove(x));
  }      
    cout<<item(x)<<endl;
    return 0;
}

