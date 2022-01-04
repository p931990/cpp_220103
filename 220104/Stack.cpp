#include <iostream>
using namespace std;

#include "Stack.h"

Stack::Stack(int sz = 10)
{
  idx = 0;
  buff = new int[sz];
}

Stack::~Stack()
{
  delete[] buff;
}

void Stack::push(int v)
{
  buff[idx++] = v;
}

int Stack::pop()
{
  return buff[--idx];
}

Stack s1;
int main()
{
  Stack s2(100);
  Stack s3{100};

  s1.push(10);
  s2.push(20);

  cout << s1.pop() << endl;
  cout << s2.pop() << endl;
}