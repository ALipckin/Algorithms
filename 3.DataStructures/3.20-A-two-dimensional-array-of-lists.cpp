#include <iostream>
#include <stdlib.h>
#include <math.h>
#include "point.h"
using namespace std;

struct node{
    point p; node * next;
    node(point pt, node* t){p = pt; next = t; } };
typedef node * link;
static link **grid;
static int G , cnt = 0; static float d;
void gridinsert(float x, float y){
    int X = x*G + 1; int Y = y * G + 1;
    point p; p.x = x; p.y = y;
    link s, t = new node(p, grid[X][Y]);
    for(int i = X-1; i <= X+1; i++)
     for(int j = Y-1; j<= Y+1; j++)
      for(s=grid[i][j]; s!= 0; s = s->next)
       if(distance(s->p, t->p) < d)cnt++;
    grid[X][Y] = t;
}

node **malloc2d(int r, int c){
    node *t = new node(0,0)[r];
    for(int i = 0; i < r; i++)
    t[i] = new node(0,0)[c];
    return t;
}

float randFloat(){
   float r = 0.0 + static_cast <float> (rand())
   /( static_cast <float> (RAND_MAX/(4.0)));
    return r;
}

int main(int argc, char *argv[])
{ int i, N = atoi(argv[1]);
 d = atof(argv[2]); G = 1/d;
 grid = malloc2d(G+2, G+2);
 for(i = 0; i < G+2; i++)
   for(int j = 0; j < G+2; j++)
     grid[i][j] = 0;
 for(i=0; i < N; i++)
   gridinsert(randFloat(), randFloat());
   cout<<cnt<<"pairs in a radius of "<<d<<endl;

    return 0;
}
