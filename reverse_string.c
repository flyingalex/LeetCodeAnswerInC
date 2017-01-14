#include <stdio.h>
#include <stdlib.h>

char* reverseString(char* s);

//https://leetcode.com/problems/reverse-string/
// test
int main(int argc, char **argv)
{
    char *str = "Hello0";
    printf("reserve_string = %s\n", reverseString(str));
    return 0;
}

char* reverseString(char* s) {
    int count = 0;
    for (; s[count] !='\0'; count++);
    char * newStr = malloc(count+1);
    for (int i = 0; s[i] != '\0'; i++) {
        newStr[i] = s[count-i-1];
    }
    newStr[count] = '\0';
    return newStr;
}
