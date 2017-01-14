#include <stdio.h>
#include <math.h>

int findComplement(int num);

//https://leetcode.com/problems/number-complement/
// test
int main(int argc, char **argv)
{
    printf("number = %d\n", findComplement(1));
    return 0;
}

int findComplement(int num) {
    int i = num;
    int count = 0;
    while(i != 0) {
        i = i/2;
        count++;
    }
    int reverseNum = ~num;
    int num2 = ~((int)pow(2,count)-1);
    return reverseNum ^ num2;
}


