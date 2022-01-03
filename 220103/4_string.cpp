// 4_string.cpp
#include <iostream>
using namespace std;

#include <string.h>

// 1. C언어에서는 문자열을 다룰 때,
//    char 배열 또는 const char* 를 사용합니다.

int main()
{
  char s1[] = "hello";
  const char *s2 = "hello";

  if (s1 == s2) // 주소를 비교합니다.
  {
    // ?
  }

  if (strcmp(s1, s2) == 0)
  {
    printf("동일한 문자열 입니다...\n");
  }
}