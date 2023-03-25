#include <stdio.h>
#include "list-interface.h"
link freelist;
void construct(int N)
{
    freelist = new node[N+1];
    for(int i = 0; i<N; i++)
      freelist[i].next = &freelist[i+1];
    freelist[N].next = 0;
}
link newNode(int i)
{
    link x = remove(freelist);
    x->item = i; x->next = x;
    return x;
}

link reverse(link x)
{
    link t, y = x, r = 0;
    while (y != 0)
    {
        t = y->next; y->next = r; r = y; y = t;
    }
    return r;
}

void deleteNode(link x)
 {insert(freelist, x);}
void insert(link x, link t)
 {t->next = x->next; x->next = t;}
link remove (link x)
 {link t = x->next; x->next = t->next; return t;}
link next(link x)
 {return x->next;}
Item item(link x)
 {return x->item;}

