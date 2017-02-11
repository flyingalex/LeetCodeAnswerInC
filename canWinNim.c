#include <stdio.h>
#include <stdbool.h>
bool canWinNim(int n);
int main(int argc, char ** argv)
{
    printf("A win ? = %s \n", canWinNim(10) ? "true" : "false" );
    return 0;
}

bool canWinNim(int n) {
    return (n % 4 != 0);
}
