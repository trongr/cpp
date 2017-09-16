#include <stdio.h>

#define LOWER 0   /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20   /* step size */

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */
int main() {
  float fahr, celsius;
  fahr = LOWER;
  while (fahr <= UPPER) {
    celsius = 5 * (fahr - 32) / 9;
    printf("%10.2f\t%10.2f\n", fahr, celsius);
    fahr = fahr + STEP;
  }
}