#include <stdio.h>

#define LONGEST_WORD    18    /* Words longer than this will be grouped in the counts */
#define WORDS_PER_UNIT  500   /* how many words per # (rounded up) */

int main(void) {

  int counts[LONGEST_WORD];
  int c, wordlength;

  wordlength = 0;

  for(int i=0; i< LONGEST_WORD; ++i)
    counts[i] = 0;

  while((c = getchar()) != EOF) {
    if(c != ' ' && c != '\t' && c != '\n'){
      ++wordlength;
      continue;
    }

    if(wordlength > 0) {
      if(wordlength < LONGEST_WORD) {
        ++counts[wordlength - 1];
      } else {
        ++counts[LONGEST_WORD - 1];
      }
    }
    wordlength = 0;
  }

  for(int i=1; i < LONGEST_WORD; ++i) {
    printf("%4d: %5d | ", i, counts[i-1]);
    for(int j=0; j<counts[i-1]; j=j+WORDS_PER_UNIT){
      putchar('#');
    }
    putchar('\n');
  }

  printf("> %d: %5d | ", LONGEST_WORD, counts[LONGEST_WORD -1]);

  for(int i=0; i<counts[LONGEST_WORD-1]; i=i+WORDS_PER_UNIT){
    putchar('#');
  }
  putchar('\n');
}
