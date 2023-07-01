// Create a table of the first 10 factorial numnbers

#include <stdio.h>

int main(void) {
  // Create heading
  printf ("TABLE OF FACTORIALS\n");
  printf (" n         n!      \n");
  printf ("--- ---------------\n");

  for (int i = 1; i <= 10; i++) {
  int factorial = 1;
    for (int j = i ; j > 0; j--) {
      factorial *= j;
    }
  printf ("%3i %15i\n", i, factorial);
  }
  printf ("\n");
  
  return 0;
}