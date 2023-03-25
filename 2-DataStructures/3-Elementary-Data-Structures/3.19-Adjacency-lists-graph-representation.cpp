#include <stdio.h>
#include <iostream>
#include "list.h"
using namespace std;

int main()
{
    const int V = 10;
    int i, j; link adj[V];
    for(i = 0; i < V; i++) adj[i] = 0;
    while(cin>>i>>j)
    {
        adj[j] = new node(i, adj[j]);
        adj[i] = new node(j, adj[i]);
    }
    return 0;
}