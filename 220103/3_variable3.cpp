// 3_variable3.cpp
#include <iostream>
using namespace std;

// int a;    =>  int
// int x[10] =>  int[10]
// int y[3]  =>  int[3]

// C++ / C++ 함수는 배열을 인자로 전달받을 때
// decay(부식)를 수행합니다.
// : 배열의 첫번째 원소의 시작 주소가 전달됩니다.
// > 배열을 전달받는 함수는 반드시 길이에 대한 추가정보를 인자를 통해 전달해야 합니다.
void foo(int *x, int n)
{
  for (int i = 0; i < n; ++i)
    cout << x[i] << endl;
}

// int z[3][5];
// > [ int[5] ][ int[5] ][ int[5] ]

// int *p[5];   > 포인터 배열(40바이트) - [int*][int*][int*][int*][int*]
// int (*p)[5]; > 배열 포인터(8바이트)

void goo(int (*p)[5])
{
}

int main()
{
  int z[3][5];
  // z의 타입: int[3][5]
  goo(z);

  int y[3] = {1, 2, 3};
  foo(y, 3);

  int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  foo(x, 10);
}
