#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    long int x = atoi(argv[1]);
    long int y = atoi(argv[2]);
    long int result = x^y;
    long int count;
    while (result) {
        if (result & 1) {
            ++count;
        }
        result = result>>1;
    }
    printf("Hamming Distance = %ld\n", count);
    return 0;
}
