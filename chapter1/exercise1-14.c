#include <stdio.h>

int main(void) {
  int a = 'a';
  int z = 'z';
  int counts[z-a];

  for(int i = 0; i < (z-a); ++i) {
    counts[i] = 0;
  }

  int c = 0;
  
  while((c = getchar()) != EOF) {
    if(c <= z && c >= a) {
      ++counts[c - a];
    }
  }

  for(int i = 0; i <= (z-a); ++i) {
    printf("%c: %d\n", i + a, counts[i]);
  }
}
