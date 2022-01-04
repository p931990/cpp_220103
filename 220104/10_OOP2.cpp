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

/*
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
*/

// 3. 상태를 나타내는 데이터와 상태를 조작하는 함수를 묶자.
struct Stack
{
  // 멤버 변수(데이터)
  int buff[10];
  int idx;

  // 멤버 함수
  // - 멤버 데이터에 접근하는 함수
  // > 명시적인 함수 인자로 Stack*을 받을 필요가 없습니다.
  void init()
  {
    idx = 0;
  }

  void push(int v)
  {
    buff[idx++] = v;
  }

  int pop()
  {
    return buff[--idx];
  }
};

Stack s1;
int main()
{
  Stack s2;

  // 초기화가 필요합니다.
  // s1.idx = 0;
  s1.init();
  // s2.idx = 0;
  s2.init();

  s1.push(10);
  s2.push(20);
  // push(&s1, 10);
  // push(&s2, 20);

  cout << s1.pop() << endl;
  cout << s2.pop() << endl;
}