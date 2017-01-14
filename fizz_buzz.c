#include <stdlib.h>
#include <stdio.h>
#include <math.h>

char** fizzBuzz(int);
int count(int);

// test
int main(int argc, char **argv)
{
    int n = 50;
    char ** result;
    result = fizzBuzz(n);
    for(int i = 0; i < n; i++)
      printf("%s\n", result[i]);
    return 0;
}

char** fizzBuzz(int n) {
    
    char ** fizzBuzz;
    fizzBuzz = malloc(sizeof(char *)*n);
    char *FIZZ = "Fizz";
    char *BIZZ = "Buzz";
    char *FIZZ_BUZZ = "FizzBuzz";
    for (int i = 1; i <= n; i++)
    {
        int index = i -1;
        if (i%15 == 0) {
            fizzBuzz[index] = malloc(sizeof(char)*9);
            fizzBuzz[index] = FIZZ_BUZZ;
        } else if (i%3 == 0) {
            fizzBuzz[index] = malloc(sizeof(char)*5);
            fizzBuzz[index] = FIZZ;
        } else if (i%5 == 0) {
            fizzBuzz[index] = malloc(sizeof(char)*5);
            fizzBuzz[index] = BIZZ;
        } else {
            fizzBuzz[index] = malloc((count(i)+1)*sizeof(char));
            sprintf(fizzBuzz[index], "%d", i);
        }
    }
    return fizzBuzz;
}

// integer length
int count(int n)
{
    int count = 0;
    while(n != 0)
    {
        // n = n/10
        n /= 10;
        ++count;
    }
    return count;
}

