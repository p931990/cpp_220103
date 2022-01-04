// 8_new.cpp
// 동적 메모리 할당
// - malloc / free
#include <iostream>
using namespace std;

int g[1000000] = {1, 2, 3};
// 수명: 프로그램 시작 - 끝
// 장점: 언제 어디서든 쉽게 접근이 가능하다.
//      - 복잡도를 낮출 수 있다.
// 단점: 함수가 전역 변수에 의존할 경우,
//      함수의 재사용성이 떨어진다.
int add(int a, int b)
{
  return a + b;
}

void foo()
{
  int a;
  // 지역 변수(auto 변수)
  // - 스택에 저장됩니다.
  // - foo함수가 실행될 때 생성되고, foo함수가 끝날 때 해지됩니다.
  // > 메모리 할당 해지의 비용의 없다.

  static int b;
  // 내부 정적 변수
  // - 전역 변수와 동일한 영역으로 관리됩니다.(데이터 영역)
  // > foo 함수가 처음 실행될 때 생성되고, 프로그램이 종료할 때까지 유지됩니다.
  //  : 함수가 상태를 가져야할 때 사용합니다.
}

#include <string.h>

int main()
{
  char str[] = "hello world show me the money";

  for (char *p = strtok(str, " "); p != NULL; p = strtok(NULL, " "))
    printf("%s\n", p);
}
