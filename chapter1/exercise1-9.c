#include <stdio.h>

int main(void)
{
  int c = 0;
  int spaces = 0;

  while((c = getchar()) != EOF) {
    if(c == ' ') {
      ++spaces;
    } else {
      if(spaces > 0) {
        putchar(' ');
        spaces = 0;
      }

      putchar(c);
    }
  }
}
