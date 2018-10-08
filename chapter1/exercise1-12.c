#include <stdio.h>

int main(void) {

  int c;
  int spaces = 0;
  while((c = getchar()) != EOF){
    if(c == ' ' || c == '\t') {
      spaces = 1;
    } else if(c == '\n'){
      spaces = 0;
      putchar('\n');
    } else {
      if(spaces == 1) {
        spaces = 0;
        putchar('\n');
      }
      putchar(c);
    }
  }
}
