// 3_variable.cpp
// > C++ 변수의 특징

#include <iostream>
using namespace std;

int main()
{
  int n1 = 0xfa;
  //       11111010
  // > C++11 부터는 2진수 표기가 가능합니다.
  //   C++11 부터는 자릿수 표기도 가능합니다.
  //   1,000,000
  // int n2 = 0b11111010;
  int n2 = 0b11111010;
  cout << n1 << ", " << n2 << endl;

  int n3 = 100;
  // C언어에서는 허용되지 않는 경우가 많습니다.
  // C++에서는 어떤 위치에서든 변수를 정의할 수 있습니다.
}