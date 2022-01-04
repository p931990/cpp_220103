// 10_OOP2.cpp
#include <iostream>
using namespace std;

// Stack을 만들어 봅시다.
// - 우선순위 큐
//  : 스택 - LIFO
//    큐  - FIFO
// 1. 전역 변수 / 함수를 이용한 스택
/*
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
*/

// 2. Stack 타입을 설계해봅시다.
struct Stack
{
  int buff[10];
  int idx;
};

void push(Stack *s, int v)
{
  s->buff[(s->idx)++] = v;
}

int pop(Stack *s)
{
  return s->buff[--(s->idx)];
}

Stack s1;
int main()
{
  Stack s2;

  // 초기화가 필요합니다.
  s1.idx = 0;
  s2.idx = 0;

  push(&s1, 10);
  push(&s2, 20);

  cout << pop(&s1) << endl;
  cout << pop(&s2) << endl;
}
