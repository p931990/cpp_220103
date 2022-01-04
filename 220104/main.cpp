
#include <iostream>
using namespace std;

#include "Stack.h"

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

// g++ -c Stack.cpp -std=c++11
// g++ -c main.cpp -std=c++11
// g++ main.o Stack.o
// ./a.out