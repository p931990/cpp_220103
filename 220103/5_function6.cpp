// Trailing return type
#include <iostream>
using namespace std;

// 함수 포인터
// => 함수의 주소를 참조하는 포인터입니다.
// => 함수 포인터를 통해 함수를 호출할 수 있습니다.

// 함수의 타입은 함수의 파라미터와 반환타입에 의해 결정된다.
//  => 함수의 파라미터와 반환 타입이 동일하면 동일한 타입이다.

int sub(int a, int b) { return a - b; } // int(int, int)
int add(int a, int b) { return a + b; } // int(int, int)

int main()
{
  int a;
  int *p = &a;
  // add => int(int a, int b)
  int (*p2)(int a, int b) = &add;

  p2 = &sub;
  cout << (*p2)(10, 20) << endl;
}
