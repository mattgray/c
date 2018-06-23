#include <stdio.h>

int main()
{
  // These work
  printf("hello, world\a");
  printf("hello, world\b");

  // These don't
  // There is a fixed number of escape sequences
  // printf("hello, world\c");
  // printf("hello, world\d");
}
