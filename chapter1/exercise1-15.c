 #include <stdio.h>
   /* print Fahrenheit-Celsius table
       for fahr = 0, 20, ..., 300 */
#define LOWER 0
#define UPPER 300
#define STEP 20

int fahr2celsius(int fahr) {
  return 5 * (fahr-32) / 9;
}

int main(void)
{
	int fahr = LOWER;
	while (fahr <= UPPER) {
    printf("%d\t%d\n", fahr, fahr2celsius(fahr));
    fahr = fahr + STEP;
	}
  return 0;
}
