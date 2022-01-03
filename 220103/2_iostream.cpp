// 2_iostream.cpp
// > C++ 표준 입출력
// 1. C언어에서는 표준 입출력을 위해 대표적으로 사용하는 함수
//   : printf, scanf

/*
#include <stdio.h>

int main()
{
  int n = 0;
  scanf("%d", &n);

  printf("out: %d\n", n);
}
*/

// C++에서 제공하는 표준 입출력
#include <iostream>
using namespace std; // !!!

int main()
{
  int n = 0;
  cin >> n;

  // cout << "out: " << n << std::endl;
  cout << "out: " << n;
  cout << std::endl;
}