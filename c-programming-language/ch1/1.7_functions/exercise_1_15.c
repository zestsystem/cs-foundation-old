/* Rewrite the temperature conversion program of section 1.2 to use a function
 * for conversion. */

#include <stdio.h>

#define LOWER 0   /* lower limit of table */
#define UPPER 300 /* upper limit of table */
#define STEP 20   /* step size */

double convert_to_celcius(double fahr) {
   return (5.0 / 9.0) * (fahr - 32);
};

int main() {
  int fahr;

  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
    printf("%3d %6.1f\n", fahr, convert_to_celcius(fahr));
  }
}
