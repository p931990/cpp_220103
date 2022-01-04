// 10_OOP2.cpp
#include <iostream>
using namespace std;

// Stack을 만들어 봅시다.
// - 우선순위 큐
//  : 스택 - LIFO
//    큐  - FIFO
// 1. 전역 변수 / 함수를 이용한 스택
int buff[10];
int idx = 0;

// push
void push(int v)
{
  buff[idx++] = v;
}
// pop
int pop()
{
  return buff[--idx];
}

int main()
{
  push(10);
  push(20);

  cout << pop() << endl;
  cout << pop() << endl;
}