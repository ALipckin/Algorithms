#include <iostream>
using namespace std;

int main(int argc, char *argv[])
  { int i, N = atoi(argv[1]);
    int *a = new int[N];
    if (a == 0)
      { cout << "не хватает памяти" << endl;  return 0; }
  }