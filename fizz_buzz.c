#include <stdlib.h>
#include <stdio.h>  

char** fizzBuzz(int n, int* returnSize) {

    char ** fizzBuzz = [][];
    const char *FIZZ = "Fizz";
    const char *BIZZ = "Bizz";
    const char *FIZZ_BUZZ = "FizzBizz";
    int i;
    for (i = 0; i < n; i++)
    {
        if (i%15 == 0) {
         fizzBuzz[i] = malloc(sizeof *FIZZ_BUZZ;
         fizzBuzz[i] = *FIZZ_BUZZ;
        } else if (i%3 == 0) {
          fizzBuzz[i] = malloc(sizeof *FIZZ);
          fizzBuzz[i] = *FIZZ;
        } else if (i%5 == 0) {
          fizzBuzz[i] = malloc(sizeof *BIZZ);
          fizzBuzz[i] = *BIZZ;
        } else {
          fizzBuzz[i] = malloc(sizeof int);
          fizzBuzz[i] = i;
        }
    }
    return fizzBuzz;
}
