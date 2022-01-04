// Trailing return type
#include <iostream>
using namespace std;

// 함수 포인터
// => 함수의 주소를 참조하는 포인터입니다.
// => 함수 포인터를 통해 함수를 호출할 수 있습니다.

int add(int a, int b) { return a + b; }

int main()
{
  int a;
  int *p = &a;
  // add => int(int a, int b)
  int (*p2)(int a, int b) = &add;
  cout << (*p2)(10, 20) << endl;
}
