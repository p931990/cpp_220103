#include <iostream>
using namespace std;

// 6_reference2.cpp
// 1) call by value

// inc1
//   x: 10 -> 11
//
// -------
// main
//   n: 10

void inc1(int x)
{
  ++x;
}

// 2) call by pointer
// inc2
//   x: 0x100 -> ++(*0x100)
//
// -------
// main
//   n(0x100): 10 -> 11

void inc2(int *x)
{
  ++(*x);
}

// inc2
//
// -------
// main
//   n / x: 10 -> 11
void inc3(int &x) // int& x = n;
{
  ++x;
}
/*
int main()
{
  int n = 10;
  // inc1(n);


  inc2(&n);
  inc3(n);

  cout << n << endl;
}
*/

void foo(int *x)
{
  printf("foo: sizeof(%ld)\n", sizeof(x));
}

void goo(int (&x)[5])
{
  printf("goo: sizeof(%ld)\n", sizeof(x));
}

int main()
{
  int x[5];
  printf("main: sizeof(%ld)\n", sizeof(x));

  foo(x);
  goo(x);
}