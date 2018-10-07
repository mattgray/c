#include <stdio.h>

int main(void)
{
  int c, ns, nt, nl;
  c = ns = nt = nl = 0;

  while((c = getchar()) != EOF) {
    if(c == ' ') {
      ++ns;
    } else if(c == '\t') {
      ++nt;
    } else if(c == '\n') {
      ++nl;
    } else {
      /* nothing */
    }
  }

  printf("spaces: %d, tabs: %d, newlines: %d\n", ns, nt, nl);
}
