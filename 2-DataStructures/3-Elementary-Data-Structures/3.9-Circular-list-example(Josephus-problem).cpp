#include <iostream>
#include <stdlib.h>
#include <list.h>
using namespace std;

int main(int argc, char* argv[])
{
    int i, N = atoi(argv[1]), M = atoi(argv[2]);
    link t = new node(1, 0); t->next = t;
    link x = t;
    for (i = 2; i <= N; i++)
        x = (x->next = new node(i, t));
    while (x != x->next)
    {
        for (i = 1; i < M; i++) x = x->next;
        x->next = x->next->next;
    }
    cout << x->item << endl;
}
