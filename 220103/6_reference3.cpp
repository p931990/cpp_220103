// 6_reference3.cpp
#include <iostream>
#include <string>
using namespace std;

struct User
{
  std::string name;
  int age;
};

void printUser(User user)
{
  cout << user.name << ", " << user.age << endl;
}

// g++ 6_reference3.cpp -std=c++11
int main()
{
  User user{"Tom", 42};
  printUser(user);
}